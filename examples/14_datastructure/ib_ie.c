#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newmem, *head, *temp;
void create()
{
    if (head==NULL)
    {
        newmem=(struct node *)malloc(sizeof(struct node));
        head=newmem;
        printf("Enter head member\n");
        scanf("%d",&head->data);
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
        // newmem=(struct node *)malloc(sizeof(struct node));
        printf("Enter the extra number of nodes\t");
        scanf("%d",&count);
        for (i = 0; i < count; i++)
        {
            newmem=(struct node *)malloc(sizeof(struct node));
            temp->next=newmem;
            printf("Enter next member\n");
            scanf("%d",&newmem->data);
            temp=newmem;
        }
        temp->next=NULL;
    }
}
void display()
{
    int i=0;
    printf("The entered value is :\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d : %d\n",i+1,temp->data);
        temp=temp->next;
        i=i+1;
    }
}
void insertatbegin()
{
    newmem=(struct node *)malloc(sizeof(struct node));
    printf("Enter New Data to the list : ");
    scanf("%d",&newmem->data);
    newmem->next=head;
    head=newmem;
}

void insertend()
{
    newmem=(struct node *)malloc(sizeof(struct node));
    printf("Enter New Data to the list : ");
    scanf("%d",&newmem->data);
    // temp=head;
    // while(temp->next!=NULL)  //traverse through the list
    // {
    //      temp=temp->next;
    // }
    temp=head;  
    while(temp->next!=NULL)
    {
       temp=temp->next;  
    }    
    temp->next=newmem;       //next of temp will point to 'newmem'
    newmem->next=NULL;
}
void main()
{
    int option,p2;
    create();
    insert();
    display();
    printf("If you want to insert at begning press 1 else 0 : ");
    scanf("%d",&option);
    if (option == 1)
    {
        insertatbegin();
        display();
    }
    printf("If you want to insert at end press 1 else 0 : ");
    scanf("%d",&p2);
    if(p2==1)
    {
        insertend();
        display();
    } 
}