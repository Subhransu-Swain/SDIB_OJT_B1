#include <stdio.h>
struct employee 
{
    char name[10];
    int id;
    float salary;
    double b;
} c;
int main()
{
    printf("%d\t",sizeof(c));
    printf("%d\t",sizeof(c));
    printf("%d\t",sizeof(c));
    printf("%d\t",sizeof(c));
}