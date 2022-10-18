#include <stdio.h>
int add(int,int);

int add(int a, int b){
    int add = a + b;
    return add;
}

// int sub(int,int){
//    int num1, num2,c;
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     c=num1-num2;
//     printf("subtraction: %d\n", c);
// }

int mul(int a, int b){
    int mul = a * b;
    return mul;
}

float div(float a, float b){
    float div = a / b;
    return div;
}

// float mod(int a, int b){
//     int mod = a % b;
//     return mod;
// }

int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Arithmetic operations on %d and %d: \n", num1, num2);
    printf("Addition: %d+%d=%d\n",num1,num2,add(num1, num2));
    // sub(num1,num2);
    // printf("Multiplication: %d\n", mul(num1, num2));
    // printf("Division: %0.3f\n", div(num1, num2));
    // printf("Modulus: %d\n", mod(num1, num2));
    return 0;
}