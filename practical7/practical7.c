#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int x){

  if (x <=0){
  
    return 1;
  }
  else{

    return (x*factorial(x-1));
    
  }

}


int main(void){

  int order;
  printf("Order of polynomial: ");
  scanf("%d", &order);
  
  double *terms;
  terms = (double *)malloc(order*sizeof(double));
  
  for (int i=0; i<order; i++){
    terms[i] = 1.0/ (double)factorial(i+1);
  }
  
  double e;
  e = 1.0;
  for (int i=0; i<order; i++){
    e = e + terms[i];
  }

  free(terms);
  
  printf("e approximation: %lf\n", e);

  return 0;
}
