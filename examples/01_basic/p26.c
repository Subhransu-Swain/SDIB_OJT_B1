#include<stdio.h>
int main()
{
    int a,b,i,x,y;
    printf("Enter the 1st value :");
    scanf("%d",&a);
    printf("Enter the 2nd value :");
    scanf("%d",&b);

    for(i=3;i>=0;i--)
    {
        x=(a>>i)&0X01;
        y=(b>>i)&0X01;
        printf("%d\t",x&y);



    }
}