#include <stdio.h>
int main() 
{
    int a[]={1,2,3,4,5,6},*p;
    printf("%d\n",p+5);
    printf("%d\n",*(a+5));
    printf("%d\n",p+2);
    printf("%d\n",*(a+2));
    printf("%d\n",((p+5)-(p+2)));


    printf("%d\n",*(a+0));
    printf("%d\n",*(p+0));


    // printf("Enter elements: \n");
    // for (int i = 0; i < 5; ++i)
    //     scanf("%d", a + i);
}