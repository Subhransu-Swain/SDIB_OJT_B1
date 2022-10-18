#include <stdio.h>
int mul(int,int);

int mul(int a, int b){
    int mul = a * b;
    return mul;
}
int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Arithmetic operations on %d and %d: \n", num1, num2);
    printf("multiplication: %d*%d=%d\n",num1,num2,mul(num1, num2));
}