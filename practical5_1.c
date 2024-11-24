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
  
  

  return 0;

}
