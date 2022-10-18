#include<stdio.h>  
 int main()    
{    
    int a=3,b,c;
    b+=a=10;
    c=a<10;
    printf("%d %d %d\n",a,b,c);
}