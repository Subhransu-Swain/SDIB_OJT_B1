#include <stdio.h> 
#include <string.h> 
int main () 
{ char str1[12] = "Hello"; 
  char str2[30] = "World is best "; 
  char str3[50]; 
  strcpy(str3,str2);
  printf("%s\n",str3); 
}
