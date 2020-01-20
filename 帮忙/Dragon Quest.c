#include<stdio.h>

int a[3][3],hp=100,lv,hpmax,fhp,flv;//开3*3数组存题目给的怪的数据,用fhp和flv判断生命和等级是否符合条件
/*数组存数是从0开始*/

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}//读入优化函数,不会用的话直接用scanf也可以,但这个是证明你学过竞赛最简单的办法



int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j]=read();
			if(a[i][j]<=0){
				printf("The monster is too weak...\n");//如果有怪攻击力小就直接结束
				return 0;
			}
		}
	}//输入数据初始化二维数组

	for(int i=0;i<3;i++){
		hp-=a[i][0];
		lv+=a[i][0];
		/*正常打第一层的怪*/
		for(int j=0;j<3;j++){
			hp-=a[j][1];
			lv+=a[j][1];
			/*正常打第二层的怪*/
			for(int k=0;k<3;k++){
				hp-=a[k][2];
				lv+=a[k][2];
				/*正常打第三层的怪*/
				if(hp>0) fhp=1;//血量是够的就为1
				if(hp>hpmax&&lv>=60){
					hpmax=hp;
					flv=1;
				}//如果血多并且级别够就更新最大血量
				hp+=a[k][2];
				lv-=a[k][2];
				/*将状态回溯到打这个怪之前*/
			}
			hp+=a[j][1];
			lv-=a[j][1];
			/*将状态回溯到打这个怪之前*/
		}
		hp+=a[i][0];
		lv-=a[i][0];
		/*将状态回溯到打这个怪之前*/
	}
	
	if(fhp&&flv) printf("The brave still has %dHP left to face the BOSS\n",hpmax);//判断勇者活着并且等级够的情况
	if(!flv) printf("why don't give the brave a chance to level up...\n");//等级不够的情况
	if(!fhp) printf("The brave died on the way to leveling...\n");//挂了

	return 0;//程序正常结束
}