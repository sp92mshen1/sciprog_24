# Practical 5

This practical contains TWO files: practical5_1.c and practical5_2.c.

In practical5_1.c, a Fibonacci sequence is printed out, according to user input of the number of values. 

In practical 5_2.c, different methods of calculating arctan(x) are used. One method is the McLaurin series, and the other is using natural logarithm. The difference between the results of both methods are calculated for each x value, and the mean difference is printed. User input is needed for delta value, which provides a lower bound to terminate the McLaurin series past the delta value.

"-lm" needs to be added to the compilation code to run as it uses <math.h>; i.e. use "gcc -o practicalx practicalx.c -lm" to run.
