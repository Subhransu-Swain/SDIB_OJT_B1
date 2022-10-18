#include<stdio.h>
#include<string.h>
void main()
{
    char username[10];
    char password[10];

    printf("please enter your username :");
    scanf("%s",&username);
    printf("please enter your password :");
    scanf("%s",&password);
    if(username == "subhransu" && password == "5242")
    {
         printf("welcome");
    }
    else 
    {
        printf("invalid !!!");
    }
    
}