#include<stdio.h>
int main()
{
    register int i,n;
    printf("enter the range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d\t",i);  
    }
}