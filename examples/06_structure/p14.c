#include<stdio.h>
int display(int , int , int );
struct data{
   int a;
   int b;
   int res;
};
int main ( )
{
   struct data d= {10,20,10+20}; 
   display(d.a, d.b, d.res);
}
int display(int x, int y, int z){
   printf("value 1 = %d\n", x);
   printf("value 2 = %d\n",y);
   printf("result = %d\n",z);
}