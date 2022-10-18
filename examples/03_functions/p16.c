#include<stdio.h>
void PrintNaturalNumber(int n)
{
    if(n<=50)
    {
        printf(" %d ",n);
        PrintNaturalNumber(n+1);
    }
}
int main()
{
    int n=1;
    printf("First 50 Natural Numbers are:");
    PrintNaturalNumber(n);
}