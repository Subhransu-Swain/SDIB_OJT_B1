#include<stdio.h>
typedef enum
{
    male, Female=-1
}GENDER;
int main()
{
    GENDER var=Male;
    GENDER var1=Female;
    printf("%d %d",var,var1);
    return 0;
}