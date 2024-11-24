#include <stdio.h>
#include <math.h>

int main(void){
  
  float delta;
  printf("Input real positive number delta (e.g. 2.0):");
  scanf("%f", &delta);
  
  double arctanh1(float x){
    
    double n = -1.0;
    double series =0;
    double numerator, denominator;
    double element = 0;
    while (element < delta){
      n = n+1.0;
      numerator = pow(x, (2.0*n + 1.0));
      denominator = 2.0*n + 1.0;
      element = numerator / denominator;
      series = series + element;
      element = numerator / denominator;
      
      }
    
    return series;
  }
  
  double arctanh2(double y){
  
    double approx;
    approx = 0.5*(logf(1.0 + y) - logf(1.0 - y));
    
    return approx;
  
  }
  
  double h = -0.91;
  double sum, ap;
  double sums[180], aps[180];
  int j = -1;
  while (h < 0.9){
    h = h + 0.01;
    sum = arctanh1(h);
    ap = arctanh2(h);
    j = j + 1;
    sums[j] = sum;
    aps[j] = ap;
    
  }
  
  int i;
  double diff[180];
  for (i = 0; i <180; i++){
    sum = sums[i];
    ap = aps[i];
    diff[i] = sum - ap;
    
  }
  
  double mean_num = 0.0;
  for (i = 0; i<180; i++){
  
    mean_num = mean_num + diff[i];
  
  }
  
  double mean;
  
  mean = mean_num / 180.0;
  
  printf("Mean difference between the two methods: %.10f", mean);
  
  
  return 0;
  
}