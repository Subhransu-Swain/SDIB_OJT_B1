#include<stdio.h>
int main()
{

    int a[5],i,j,count=0;
    printf("enter numbers: ");
    for(i=0;i<=4;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("no.s are: ");
    for(i=0;i<=4;i++)
    {
         printf("%d ",a[i]);
    }
    for(i = 0; i < 5; i++)
    {
         for(j=i+1; j < 5; j++)
         {
   
           if(a[i] == a[j])
           {
    
              printf("\nDuplicate element in an array is %d ",a[i]);
              break;
            }
         }
      }
    return 0;
}
