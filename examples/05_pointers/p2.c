#include<stdio.h>  
  
int main()  
{   
    int *p;
    int f=10;
    p=&f;
    printf("address of f = %p\n",f);
    printf("value of p = %d\n",p);
    printf("value of f = %d\n",f);
    printf("address of p = %p\n",&p);
    printf("value of f = %d\n",*p);
}
