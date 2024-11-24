#include <stdio.h>
#include <math.h>

int main(void){

  int n;
  int f0 = 0;
  int f1 = 1;
  
  printf("Input positive integer n:");
  scanf("%d", &n);
  
  if (n<1){
    printf("n must be bigger than 1\n");
    return 1;
  }
  
  void fib(int *a, int *b){
  
  int next;
  
  next = *a + *b;
  *b = *a;
  *a = next;
  
  }


  printf("Fibonacci sequence: ");

  int i;
  for (i=0; i<n; i++){
  
    fib(&f0, &f1);
    printf("%d, ", f1);
  
  }
  
  float delta;
  printf("Input real positive number delta (e.g. 2.0):");
  scanf("%f", &delta);
  
  float artanh1(float x){
    
    float n = -1.0;
    float series =0;
    float numerator, denominator;
    float element = 0;
    while (element < delta){
      n = n+1.0;
      numerator = pow(x, (2.0*n + 1.0));
      denominator = 2.0*n + 1.0;
      element = numerator / denominator;
      series = series + element;
      
      
      }
    
    printf("Series stopped at: %f\n", element); 
    printf("arctanh(x) = %f", series);
  }
  
  

  return 0;

}