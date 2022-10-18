#include <stdio.h>
int add(int,int);

int add(int a, int b){
    int add = a + b;
    return add;
}
int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Arithmetic operations on %d and %d: \n", num1, num2);
    printf("Addition: %d+%d=%d\n",num1,num2,add(num1, num2));
}