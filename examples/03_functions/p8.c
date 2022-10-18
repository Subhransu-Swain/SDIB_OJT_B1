#include<stdio.h>
int biggestNumber(int x,int y,int z)
{
    if(x>y)
    {
        printf("x is greater");
    }
    else if(y>z)
    {
        printf("y is greater");
    }
    else if(z>x)
    {
        printf("z is greater");
    }
    else{
        printf("no.s are same");
    }
}
int main()
{
    int a,b,c;
    printf("enter 3 numbers no.s:");
    scanf("%d\n %d\n %d",&a,&b,&c);
    biggestNumber(a,b,c);

    
}