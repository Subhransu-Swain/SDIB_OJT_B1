#include <stdio.h>
int main()
{
    int N = 4;
    int *ptr1;
    ptr1 = &N;
 
    printf("Pointer ptr1 "
           "before Increment: ");
    printf("%p \n", ptr1);
    ptr1++;
 
    printf("Pointer ptr1 after"
           " Increment: ");
    printf("%p \n\n", ptr1);
    N++;
    printf("%d",N);
 
    return 0;
}