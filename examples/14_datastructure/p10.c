#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *newmem, *head, *temp, *tail;
void create()
{
    newmem=(struct node *)malloc(sizeof(struct node));
    head=newmem;
    if (head!=NULL)
    {
        printf("Enter head member\n");
        scanf("%d",&head->data);
        head->prev=NULL;
        head->next=NULL;   
    }
}
void insert()
{
    int i, count;
    if(head->next==NULL)
    {
        newmem=(struct node *)malloc(sizeof(struct node));
        temp=newmem;
        printf("Enter next member after head\n");
        scanf("%d",&temp->data);
        head->next=temp;
        temp->prev=head;
        printf("Enter the extra number of nodes\t");
        scanf("%d",&count);
        for (i = 0; i < count; i++)
        {
            newmem=(struct node *)malloc(sizeof(struct node));
            newmem->prev=temp;
            printf("Enter next member\n");
            scanf("%d",&newmem->data);
            temp->next=newmem;
            temp=newmem;
        }
        temp->next=NULL;
        tail=temp;
    }
}
void displaynext()
{
    printf("On Traversing From Begning :\t");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void displayprev()
{
    printf("\nOn Traversing From End :\t");
    while(tail!=NULL)
    {
        printf("%d\t",tail->data);
        tail=tail->prev;
    }
}
void main()
{
    create();
    insert();
    displaynext();
    displayprev();
}