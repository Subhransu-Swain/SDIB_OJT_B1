#include<stdio.h>
int main(){
   int a[10],pos,i,size,value;
   printf("enter the size for the array:");
   scanf("%d",&size);
   printf("enter %d elements are:\n",size);
   for(i=0;i<size;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that poition:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
   {
      a[i+1]=a[i];
   }
   a[pos-1]= value;
   
   printf("final array after inserting the value is\n");
   for(i=0;i<=size;i++)
   {
      printf("%d\n",a[i]);
   }
   return 0;
}