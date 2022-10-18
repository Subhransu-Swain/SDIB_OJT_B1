#include<stdio.h>
int main()
{
      int i = abc(10);
      printf("%d", --i);
}

int abc(int i)
{
      return(i++);
}