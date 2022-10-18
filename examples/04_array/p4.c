#include<stdio.h>
int main()
{

    long a[5];
    long sum=0;
    int i;
    printf("enter the students id: ");
    for(i=0;i<=4;i++)
    {
        printf("\n a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("ids are: ");
    for(i=0;i<=4;i++)
    {
        sum=sum+1;
        printf("%d ",sum[i]);
    }
    return 0;
}