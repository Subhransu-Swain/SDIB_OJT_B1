#include <stdio.h>
struct arith 
{
    int a,b;
    int (*fnptr)(int,int);
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
    struct arith add,sub;
    printf("enter the values to a and b : ");
    scanf("%d %d",&add.a,&add.b);
    sub=add;
    add.fnptr=addition;
    sub.fnptr=subtraction;
    printf("%d\n",add.fnptr(add.a,add.b));
    printf("%d",sub.fnptr(sub.a,sub.b));

}