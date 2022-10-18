#include <stdio.h>  
int main()  
{  
    int n1 = 0, n2 = 1, n3, count;  
  
    printf("Enter the limit\n");  
    scanf("%d", &count);  
  
    printf("\n%d\n%d\n", n1, n2);  
  
   //  count = count - 2;  
  
    while(count)  
    {  
        n3 = n1 + n2;  
        printf("%d\n", n3);  
        n1 = n2;  
        n2 = n3;  
        count = count - 1;  
    }  
  
  
    return 0;  
}  