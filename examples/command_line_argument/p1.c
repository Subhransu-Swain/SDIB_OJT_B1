#include <stdio.h>  
void main(int argc, char *argv[] )  
{
    int i;
    printf("%s\n",argv[0]);
    printf("%d\n",argc); 
    for(i=0;i<argc;i++)
    {
        printf("argv[%d]: %s",i,argv[i]); 
    } 
}