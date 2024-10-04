#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;

/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
    binnum[i] = (tmp%2) + '0'; //basically, it adds the ascii value of 0 -> 48 to either 0 or 1
     tmp = tmp/2;
     i++;
   }
   binnum[i] = '\0';

   numdigits = ceil(logf(inum)/logf(2));
   printf("The number of digits is %d\n",numdigits);

   printf("inum=%d,  fnum=%f, inum in binary=%s\n",inum,fnum,binnum);

}
