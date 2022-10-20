#include <stdio.h>
#include <errno.h>
int main () 
{

   FILE * pf;
   pf = fopen ("noob.txt", "r");
	
   if (pf == NULL) 
   {
      perror("Error printed by perror");
      printf("error no.: %d",errno);
   } 
   else {
   
      fclose (pf);
   }
   
   return 0;
}