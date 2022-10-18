#include<stdio.h>
#include<string.h>
#define string_concat(res,s1,s2) strcat(res,#s1);strcat(res,#s2)
int main()
{
    char name[30]={0};
    string_concat(name,rugged,solutions);
    printf("\n name of oranisations is %s\n",name);
}