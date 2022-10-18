#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
      int s;
      s=sum();
      printf(“ addition is %d”,s);
}
int sum()
{
       int a,b,c;
       printf(“ enter two numbers: ”);
       scanf(“%d %d”,&a,&b);
       c=a+b;
       return  c;
}
