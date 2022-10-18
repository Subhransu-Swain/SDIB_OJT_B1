#include<stdio.h>
int main()
    {
        int a[] = {15, 50, 34, 20, 10, 79, 100};
        int n; 
        n = sizeof(a);
        printf("Size of the given array is %d\n", n/sizeof(int));
        return 0;
    }