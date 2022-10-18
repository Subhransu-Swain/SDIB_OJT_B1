#include<stdio.h>
int main()
{
    int date;
    printf("enter the date and we will show you the day: ");
    scanf("%d",&date);
    switch (date)
    {
    case 1:
         printf("thursday");  
         break;
    case 2:
        printf("friday");  
        break;
    case 3:
        printf("saturday");  
        break;
    case 4:
        printf("sunday");  
        break;
    case 5:
        printf("monday");  
        break;
    case 6:
        printf("tuesday");  
        break;
    case 7:
        printf("wednesday");  
        break;
    
    default:
        break;
    }
}