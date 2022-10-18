#include<stdio.h>
int main()
{

    int a[10],i;
    printf("enter the students id: ");
    for(i=0;i<=9;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("ids are: ");
    for(i=0;i<=9;i++)
    {
         printf("%d %d ",a[i],&a[i]);
    }
    return 0;
}