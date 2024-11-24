#include <stdio.h>
#include <math.h>

float degtorad(float p){
  
  return((M_PI*p)/180); 
  
}

///////////////////////////////////////////////////////

float trap(float A, float B, float N){

  //changing degree inputs to radian
  float a, b;
  a = (M_PI*A)/180.0;
  b = (M_PI*B)/180.0;
  
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
  
  return final_answer;

}

/////////////////////////////////////////////////////////////////////

int main(void){

  int i;
  float deg=-5.0;
  float rad;
  float rads[13];
  float tans[13];
  for (i=0; i<13; i++){
  
    deg=deg + 5.0;
    rad= degtorad(deg);
    rads[i] = rad;
    tans[i]= tan(rad);
  
  }
  
  //printing output of tan(x) for x in [0,60]
  float val1, val2;
  for (i=0; i<13; i++){
  
  val1=rads[i];
  val2= tans[i];
  printf("tan(%f) = %f\n", val1, val2);
  
  }
  
  //using trapezoidal rule: 
  float area;
  area= trap(0.0, 60.0, 12.0);
  
  printf("Area under curve: %f", area);
  
  return 0;

}
