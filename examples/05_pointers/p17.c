#include<stdio.h>
int main()
{
    int a;
    int *pt;
    a = 10;
    pt = &a;
    pt++;
    printf("\nIncrement Value of pt = %d", pt);
    printf("\nIncrement Value of a = %d", a);
    printf("\nIncrement Value of pt = %d", pt);
}