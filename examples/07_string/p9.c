#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "hello";
    char str2[50]="world";
    printf("%s\n",strcpy(str2,strcat(str1,str2)));
    return 0;
}