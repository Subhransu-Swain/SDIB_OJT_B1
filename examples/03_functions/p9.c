#include <stdio.h>
int square(int);

int square(int a){
    int square = a*a;
    return square;
}
int main(){
    int num;
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("square is:%d\n",square(num));
}