# Practical 3

In practical3.c, the area under a curve tan(x) is approximated through the Trapezoidal method; the range of area is from 0 to pi/3. The calculations are done through a combination of manual codes and loops. The real area of the curve (log(2)) is also calculated and printed to see whether the Trapezoidal approximation is different from it. The results of the code shows that there is indeed a difference in values, however, the appriximation is still close to the actual value.

"-lm" needs to be added to the compilation line to run as it uses <math.h>; i.e. use "gcc -o practicalx practicalx.c -lm" to run the code.
