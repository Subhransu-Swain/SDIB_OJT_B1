#include <stdio.h>
int main()
{
    int number;
    printf("Please input an integer number: ");
    scanf("%d",&number);
    (number & 0x01) ? printf("%d is an ODD Number.", number) :  printf("%d is an EVEN Number.",number) ;
    printf("\n");
    return 0;   
}