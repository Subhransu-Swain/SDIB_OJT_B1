#include <stdio.h>
int main()
{
    int state;
    enum LED
    {
        OFF,
        ON
    };
    if (state == OFF)
    {
        printf("%d",OFF);
    }
    else
    {
        printf("%d",ON);
    }
}