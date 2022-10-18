#include <stdio.h>  
void main(int argc, char *argv[] )  
{
    int n,i,sum=0;
    printf("%s\n",argv[0]);
    printf("%d\n",argc); 
    for(i=0;i<argc;i++)
    {
        printf("argv[%d]: %s",i,argv[i]);
        sscanf(argv[i],"%d",&n);
        sum = sum + n;
    } 
    printf("\nSum of all command line arguments is %d \n \n",sum); 
}