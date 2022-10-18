#include<stdio.h>
#include<string.h>
void main(int argc, char *argv[] )  
{
    int n,i,sum=0;
    if(strcmp(argv[1],"a")==0)
    {
        for(i=0;i<argc;i++)
        {
            printf("argv[%d]: %s\n",i,argv[i]);
            sscanf(argv[i],"%d",&n);
            sum = sum + n;
        } 
        printf("addition is: %d",sum);

    }
}