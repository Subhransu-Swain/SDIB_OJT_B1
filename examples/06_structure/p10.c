#include <stdio.h>
#pragma pack(1)
struct employee 
{
    char name;
    int age;
    float height;
    int adhar_no;
}__attribute__((packed));
int main()
{
    struct employee a;
    printf("%d\t",sizeof(a));
}