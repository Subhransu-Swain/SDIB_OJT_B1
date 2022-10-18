#include<stdio.h>  
  
int main()  
{   
    int *p;
    int f[]={1,2,3};
    p=f;
    printf(" %d\n",p);
    printf(" %d\n",*(++p));
    printf(" %d\n",p++);
    printf(" %d",*p);
}