#include<stdio.h>
int sum(int a); 
int main()
{
    int num, res;
    printf("Enter the number: ");
    scanf("%d", &num);
    res = sum(num);
    printf("Sum of the digits in %d is %d\n", num, res);
    return 0;
 }
int sum(int num)
{
    if (num != 0)
    {
       	return (num % 10 + sum (num / 10));
    }
    else
    {
       	return 0;
    }
 }
