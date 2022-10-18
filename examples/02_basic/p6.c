#include<stdio.h>
int main()
{
    int choice,a,b;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
         printf("%d",a+b);  
         break;
    case 2	:
       if(a>b)
       {
           printf(" %d",a-b);
       }
       else
       {
            printf("%d",b-a);
       }
        
        break;
    case 3	:
        printf("%d",a*b);
        break;
    case 4	:
        printf(" %d  ",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}