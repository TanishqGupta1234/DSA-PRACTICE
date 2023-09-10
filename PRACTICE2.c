#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;


    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}

void Rdisplay(struct Node *p)
{
    if(p!=NULL)
    {
        Rdisplay(p->next);
        printf("%d",p->data);
    }
}

int main()
{
    struct Node *temp;
    int A[]={2,3,4,5,6,7};
    create(A,8);


    Display(first);
    return 0;
}
