#include <stdio.h>
int sub(int,int);

int sub(int a, int b){
    int sub = a - b;
    return sub;
}
int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Arithmetic operations on %d and %d: \n", num1, num2);
    printf("subraction: %d-%d=%d\n",num1,num2,sub(num1, num2));
}