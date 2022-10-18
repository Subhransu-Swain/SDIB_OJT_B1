#include<stdio.h>
struct marks
{
    int a,b,res;
}val;

int add(int,int);
int add(int a,int b,int *res)
{
  res=a+b;
}

int main()
{
    printf("enter the 1 no: ");
    scanf("%d",&val.a);
    printf("enter the 2 no: ");
    scanf("%d",&val.b);

    val.res=add(val.a,val.b,&val.res);
    printf("%d",*val.res);
}