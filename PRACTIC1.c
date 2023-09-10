#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;

}*first=NULL;

void create(int A[],int n )
{
    int i;
    struct Node *t, *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last=t;

    }

struct Node * LSearch(struct Node *p,int key)
  {
    struct Node *q=NULL;

    while(p!=NULL)
    {
        if(key==p->data)
        {
    

    q->next=p->next;
    p->next=first;
    first=p;
        }
        return p;
    



}    

q=p;
p=p->next;

}

return NULL;

}

struct Node *RSearch(struct Node *p,int key)
{
    if(p==NULL)
       return NULL;

    if(key==p->data)
       return p;

    return RSearch(p->next,key);
}

int main()
{
    struct Node *temp;
    int A={2,3,4,5,6,7,8};
    create(A,7);

    temp=LSearch(first,8);
    printf("%d",temp->data);
    return 0;
}




}
