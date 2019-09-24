#include <stdio.h>
typedef struct wei *List;
struct wei
{
    int data;
    List next;
};
List create()
{
    List head,ptr,p;
    head=(List)malloc(sizeof(struct wei));
    ptr=(List)malloc(sizeof(struct wei));
    p=(List)malloc(sizeof(struct wei));
    p=NULL;
    int n;
    scanf("%d",&n);
    while(n!=-1)
    {
        ptr->data=n;
        ptr->next=p;
        p=ptr;
        ptr=(List)malloc(sizeof(struct wei));
        scanf("%d",&n);
    }
    return p;
}
int main()
{
    List L;
    L=create();
    while(L!=NULL)
    {
        printf("%d     ",L->data);
        L=L->next;
        
    }
    return 0;
}
