#include<stdio.h>
#include<stdlib.h>
int main(int sizeofargv, char *argv[])
{
    while(sizeofargv){
         printf("%s\n",argv[--sizeofargv]);

    }
   
    return 0;
}