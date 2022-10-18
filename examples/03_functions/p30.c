#include <stdio.h>
float sub(float, float); /* Function prototype */

int main()
{
    float a = 4.5, b = 3.2, c;
    c = sub(a, b);
    printf("c = %f\n", c);
    return 0;
}
float sub(float a, float b)
{
   return (a - b);
}