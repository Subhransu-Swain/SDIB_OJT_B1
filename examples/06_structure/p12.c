#include <stdio.h>
struct arith 
{
    int a,b;
    int (*fnptr[2])(int,int);
};
int addition(int x,int y)
{
    return x+y;
}
int subtraction(int x,int y)
{
    return x-y;
}
int main()
{
    struct arith A,S;
    printf("enter the values to a and b : ");
    scanf("%d %d",&add.a,&add.b);
    sub=add;
    A.fnptr[2]=addition;
    S.fnptr[2]=subtraction;
    printf("%d\n",add.fnptr(A.a,A.b));
    printf("%d",sub.fnptr(S.a,S.b));

}