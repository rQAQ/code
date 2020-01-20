#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

List Insert( List L, ElementType X ){
	List head=L,tail=L;
	List p=(List)malloc(sizeof(List));
	p->Data=X;
	p->Next=NULL;
	L=L->Next;
	if(L==NULL){
		head->Next=p;
		return head;
	}
	while(L->Data<X){
		tail=L;
		L=L->Next;
		if(L==NULL) break;
	}
	tail->Next=p;
	p->Next=L;
	return head;
}