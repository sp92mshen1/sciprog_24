#include <stdio.h>
#include <math.h>

int main(void){

  int n=5;
  int p=3;
  int q=4;
  
  double C[n][q], A[n][p], B[p][q];
  
  int i, j;
  
  // initialising C to 0
  for (i=0; i<n; i++){
    for (j=0; j<q; j++){  
      C[i][j] = 0;  
    }
  }
  
  //setting element values for A: A_ij = i + j
  for (i=0; i<n; i++){
    for (j=0; j<p; j++){
      A[i][j] = (i+1) + (j+1);
    }
  }

  //setting element values for B: B_ij = i + j
  for (i=0; i<p; i++){
    for(j=0; j<q; j++){
      B[i][j] = (i+1) - (j+1);
    }
  }
  
  int z;
  for (i=0; i<n; i++){
    for (j=0; j<q; j++){  
      for (z=0; z<p; z++){
        C[i][j] = C[i][j] + A[i][z] * B[z][j];
      }
    }
  }
  int value;
  
  printf("Matrix A is: \n");
  for (i=0; i<n; i++){
    for (j=0; j<p; j++){
      value= A[i][j];
      printf("%d ", value);
    }
    printf("\n");
  }
  
  printf("\n");
  
  printf("Matrix B is: \n");
  for (i=0; i<p; i++){
    for (j=0; j<q; j++){
      value= B[i][j];
      printf("%d ", value);
    }
    printf("\n");
  }
  
  printf("\n");
  
  printf("Matrix C: \n"); 
  for (i=0; i<n; i++){
    for (j=0; j<q; j++){
      value = C[i][j];
      printf("%d ", value);
    }
    printf("\n");
  }


return 0;
}