# Practical 4

In practical4.c, tan(x) for x in [0, 60] is found, every 5 degrees. A function is written to convert degrees to radians (degtorad), then another function is written to compute the area under the curve using the Trapezoidal approximation (trap). The degrees for the given range are generated using a loop. The output includes:

- the list of tan(x) values with their radians, and
- the area under the curve for the integral evaluated between 0 and 60 degrees.

"-lm" needs to be added to the compilation code to run as it uses <math.h>; i.e. use "gcc -o practicalx practicalx.c -lm" to run.
