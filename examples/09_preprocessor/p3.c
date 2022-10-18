#include<stdio.h>
void disp(char *);
#define string(s) disp(s)
int main()
{
    string("rugged solution is: ");
    string(10);
}
void disp()