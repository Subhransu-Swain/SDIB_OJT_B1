#include<stdio.h>
int evenodd(int x)
{
    if(x%2==0)
    {
        printf("even");
    }
    else 
    {
        printf("odd");
    }
}
int main()
{
    int a;
    printf("enter a no.:");
    scanf("%d",&a);
    evenodd(a);

    
}