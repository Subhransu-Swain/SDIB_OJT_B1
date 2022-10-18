#include<stdio.h>  
 int main()    
{    
    int num,m=0,rem=0,place=1,res,c;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("left shift of %d is: %d\n",num, res=num<<2);
    printf("\nbinary of %d is: ",num);
    while(num)
    {
        rem=num%2;
        
        num=num/2;
       
        
        m=m+(rem*place);
        place=place*10;
       
        
    }
    printf("%d\n",m);
}
