#include <stdio.h>
#include <string.h>

int main ()
{
    char string1[10] = "Subhransu";
    char string2[10] = "Swain";
    strncat(string1,string2,5);
    printf("Concatenation using strncat: %s", string1);
}