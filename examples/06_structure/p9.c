#include<stdio.h>
struct arith
{
    int a,b,res;
}val;
void add(struct arith *A)
{
    (*A).res=(*A).a+(*A).b;
    printf("%d",(*A).res);
}
int main()
{
    struct arith *ptr;
    ptr=&val;
    printf("%d",(*ptr).a);
}