#include<stdio.h>  
int  main() 
{
    int i=10;
    prinntnum(i);
}
void prinntnum(int i)
{
     printf("%d\n",i);//10  9 8
   
    if(i>0){
        prinntnum(i-1);

    }

}
