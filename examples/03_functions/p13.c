#include<stdio.h>
int avgNumber(int x,int y,int z)
{
    int avg1= (x+y)/2,avg2=(y+z)/2,avg3=(x+z)/2,totalavg=(x+y+z)/3;
    printf("%d \n%d \n%d \n%d",avg1,avg2,avg3,totalavg);
}
int main()
{
    int a,b,c;
    printf("enter 3 numbers no.s:");
    scanf("%d\n %d\n %d",&a,&b,&c);
    avgNumber(a,b,c);

    
}