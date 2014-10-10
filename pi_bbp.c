/*
 * Approximates pi by the summation of the first n terms of the Bailey-Borwein-Plouffe series.
 */

#include <stdio.h>

double pi_bbp (int n)
{
    // check for valid input
    if(n < 1)
    {
        printf("Invalid input\n");
        return -1;
    }
    
    // a(0) = 1, b(0) = 1, a(i) = 16*a(i-1), b(i) = b(i-1) + 8
    // pi(i) = pi(i-1) + 1/a(i)*(4/b(i) - 2/(b(i)+3) - 1/(b(i)+4) - 1/(b(i)+5))
    double pi = 0, a = 1, b = 1;
    
    for(int i = 0; i <= n; i++)
    {
        pi += 1/a*(4/b - 2/(b + 3) - 1/(b + 4) - 1/(b + 5));
        a *= 16;
        b += 8;
    }
    
    return pi;
}
