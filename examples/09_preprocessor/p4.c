#include<stdio.h>
void disp(char *);
#define STRING(s) disp(s)
int main()
{
    STRING("RUGGED SOLUTION");
    STRING("hello");
}
void disp(char *p)
{
    printf("%s\n",p);
}