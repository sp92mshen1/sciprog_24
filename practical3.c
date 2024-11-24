#include <stdio.h>
#include <math.h>

int main(void){

  float a = 0;
  float b = (M_PI)/3;
  float N = 12;
  
  float sum1;
  sum1 = tan(a) + tan(b);
  
  
  float increment, sum_p=0;
  float sum2=0;
  int i=0;
  for (i=0; i<N-1; i++){
  
  increment = b/N;
  sum_p = sum_p + increment;
  
  sum2 = 2*tan(sum_p) + sum2;
  
  }
  
  float final_sum, multiplier;
  float final_answer, real_answer;

  final_sum = sum1 + sum2;
  multiplier = (b-a)/(2*N);
  
  final_answer = multiplier*final_sum;
  real_answer = logf(2);
  
  printf("Final answer: %f\n", final_answer);
  printf("Real answer: %f\n", real_answer);
  
  return 0;
  

}