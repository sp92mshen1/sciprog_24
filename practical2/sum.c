#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   float value;
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      value= 1/(float) i;
      sum1=sum1 + value;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      value= 1/(float) i;
      sum2=sum2 + value;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2;

   printf(" Difference between the two is %f\n",diff);

}
