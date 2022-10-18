#include<stdio.h>
#include<math.h>
int main()
{
    float num1;
    float num2;
    char op;
    float result;
    printf("enter the 1st no.:");
    scanf("%f",&num1);
    printf("enter the operation:");
    scanf(" %c",&op);
    printf("enter the 2nd no.:");
    scanf("%f",&num2);
    switch(op)
    {
    case'-':
    result=num1-num2;
    printf("%f",result);
    break;
    

    case'+':
    result=num1+num2;
    printf("%f",result);
    break;

    case'*':
    result=num1*num2;
    printf("%f",result);
    break;

    case'/':
    result=num1/num2;
    printf("%f",result);
    break;

    case 6:  
            // getting the square root of the number  
            printf (" You chose: Square Root");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &num1);  
              
            result = sqrt(num1); // use sqrt() function to find the Square Root   
            printf (" Square Root of %d numbers is: %.2f", num1, result);  
            break; // break the function
    default:
    printf("the operator is not valid");
    }

}