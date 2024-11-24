# Practical 2

In Conversion - Copy.c file, decimal numbers (int) are converted to float and binary. In the code, the value 33554431 is used as int, converted to float as fnum, and binary as binnum. The number of digits in the binary number is also counted. The code can be modified to convert different int values by changing the value of inum. 

In Sum.c, the sum of the reciprocals of 1 to 1000 (i.e. 1 + 1/2 + 1/3 +...+ 1/1000) is calculated. Two different types of loops are used to calculate the same sum, and their final values are compared by finding the difference. The conclusion is that there is a difference between the results of the two loops, despite their similarities.

"-lm" needs to be added to the compilation line to run for both files as <math.h> is used; i.e. run codes using "gcc -o practicalx practicalx.c -lm". 
