#include<stdio.h>
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

    default:
    printf("the operator is not valid");
    }

}