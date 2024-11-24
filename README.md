# Practicals 2 to 7:

 Overview: 

 All codes are written in C, and can be compiled using "gcc -o practicalx practicalx.c". Codes that use the <math.h> library has asterisks (**) below; add "-lm" to the compilation code to run. Brief summaries for the goals and techniques taught for each practical exercises are provided.

 ** Practical 2: USES <math.h> and NEEDS "-lm" at the end of the COMPILATION CODE to RUN!

 - Sum.c : Finding the sum of 1 + 1/2 + 1/3 + ... + 1/1000
 - Conversion - Copy.c : Converting an integer number to float, decimal number to binary, and calculating number of digits in the binary number

** Practical 3: USES <math.h> and NEEDS "-lm" at the end of the COMPILATION CODE to RUN!

- practical3.c: Finding area under the curve for tan(x) in the range [0, pi/3], using the Trapezoidal approximation.

** Practical 4: USES <math.h> and NEEDS "-lm" at the end of the COMPILATION CODE to RUN!

- practical4.c: Writing functions to compute Trapezoidal area and convert degrees to radians. Finds the tan(x) values for x in range [0, 60] per 5 degrees. Uses loops to create the required degrees in range and perform calculations on each degree.

** Practical 5: USES <math.h> and NEEDS "-lm" at the end of the COMPILATION CODE to RUN!

- practical5_1.c: Takes user input for n to calculate n numbers of the Fibonacci sequence. Uses loops, functions, and changing values to compute sequence.
- practical5_2.c: Takes user input for delta to stop infinite McLaurin series with delta as the lower bound value. Calculates arctan(x) for [-0.90, 0.90] per 0.01 for two methods: McLaurin series and natural logarithm. Both methods are used and compared via their mean difference for every x value.

Practical 6:

- practical6.c: Computes the matrix product of two matrices, A and B, resulting in matrix C. The number of rows and columns, as well as matrix definition, are provided. Calculation is done through nested loops that run through every row and column of the matrix. All 3 matrices are printed at the end of the code to confirm their values.

Practical 7: 

- practical7.c: Uses the <stdlib.h> library to use functions like malloc(). Goal of the code is to approximate e=2.71828... using a series. Takes user input for the number of polynomials of the series to use, and prints the approximated e value at the end of the code. 
