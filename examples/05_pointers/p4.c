#include <stdio.h>
int main() 
{
    int a[5];

    printf("Enter elements: \n");
    for (int i = 0; i < 5; ++i)
        scanf("%d", a + i);

    printf("print elements using pointer: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(a + i));
    return 0;
}