#include<stdio.h>
int main()
{
    int a=2,b=3,temp;
    //with out using the third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
    //with using the third variabl.
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}