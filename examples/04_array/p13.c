#include<stdio.h>
 
int main() 
{
    char str1[30], str2[30];
    int i;
 
    printf("\nEnter two strings: ");
    gets(str1);
    gets(str2);
 
    i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }
    if (str1[i] > str2[i])
    {
        printf("str1 > str2");
    }
    else if (str1[i] < str2[i])
    {
        printf("strings are not matching.");
    }
    else
    {
        printf("strings are  matching.");
    }
 
    return (0);
}