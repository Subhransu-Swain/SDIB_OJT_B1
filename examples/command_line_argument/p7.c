#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv[])
{
    int j;
    j=atoi(argv[1])+atoi(argv[2])+atoi(argv[3]);
    printf("%d\n",j);
    return 0;
}