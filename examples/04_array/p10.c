#include<stdio.h>
int main()
{

    int a[10]={1,2,3,4,6},i,num=0;
    // printf("enter the size for the array:");
    // scanf("%d",&size);
    // printf("enter %d elements are:\n",size);
    // for(i=0;i<size;i++)
    // {
    //   scanf("%d",&a[i]);
    // }
    // printf("no.s are: ");
    // for(i=0;i<size;i++)
    // {
    //      printf("%d ",a[i]);
    // }
    for(i=0;i<10;i++)
    {
        if(a[i+1]-a[i]==1)
        {   
            continue;
        }
        else 
        {
            num=a[i+1];
            break;
        }
        printf("%d",num);
    }
}
    