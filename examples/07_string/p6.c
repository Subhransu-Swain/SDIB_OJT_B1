#include <stdio.h>
#include <string.h>

int main() 
{

  char str1[30] = "I love to write.";
  printf("%s", strchr(str1, 'w'));
}