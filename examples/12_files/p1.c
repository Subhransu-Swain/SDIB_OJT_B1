#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("fileName.txt","w");
    

    if(fp == NULL)

    {
        printf("file is not present");
    }
    else
    {
        printf("file created");
    }
    return 0; 

}