#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
    struct node*prev;
}Node;
void ins(Node **head,int num)
{
    Node *newnode;
    newnode=(Node *)malloc(sizeof(Node));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=(*head);
    if((*head)!=NULL)
    {
        (*head)->next=newnode;

    }
    (*head)=newnode;
}
void del_node(Node** head,Node* del)
{
    if(*head==NULL || del==NULL)
    {
        return;

    }
    if(*head==del)
    {
        *head=del->prev;
    }
    if(del->prev!=NULL)
    {
        del->prev->next=del->next;
    }
    if(del->next!=NULL)
    {
        del->next->prev=del->prev;
    }
    free(del);
    return;
}
void disp(Node *head)
{
    Node* last;
    while(head!=0)
    {
        printf("%d",head->data);
        last=head;
        head=head->prev;
    }
    printf("\n");
}
int main()
{
    Node *start;
    start=NULL;
    ins(&start,2);
    ins(&start,6);
    ins(&start,9);
    ins(&start,3);
    disp(start);
    del_node(&start,start);
    del_node(&start,start->prev);
    del_node(&start,start->prev);
    disp(start);
    return 0;
}