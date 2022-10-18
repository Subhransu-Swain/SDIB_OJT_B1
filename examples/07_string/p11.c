#include<stdio.h>
#include<string.h>
int main()
{
    static char s[]="hello";
    printf("%d\n",*(s+strlen(s)));
    return 0;
}