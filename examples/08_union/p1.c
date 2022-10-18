#include <stdio.h>
union student
{
   char name;
   float id;
   int age;
   double h;
} u;
int main()
{
   printf("size of union = %d bytes", sizeof(u));
   return 0;
}