#include <stdio.h>
#define left_right(data) ((data & 0x0F)<<4 | (data & 0xF0)>>4)
 int main()
{
    unsigned char value = 100;
    printf("%u\n", left_right (value));
   	return 0;
}
