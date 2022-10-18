#include<stdio.h>
main()
int f(int x)
{
   if(x <= 4)
      return x;
   return f(--x);
}
void main()
{
   printf("%d ", f(7));
}