#include<stdio.h>
int add(int,int);
int add(int a,int b)
{
   return (a+b);
}
struct marks
{
    int a,b,res;
}val;
int main()
{
    printf("enter the 1 no: ");
    scanf("%d",&val.a);
    printf("enter the 2 no: ");
    scanf("%d",&val.b);

    val.res=add(val.a,val.b);
    printf("%d",val.res);
}
