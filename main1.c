/*
 * Comments goes here
 */

#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int main(void)
{
    // initialize clocks
    clock_t lti, ltf, bti, btf;
    // initialize run times
    double t1, t2; // t1: time to approximate by leibniz, t2: time to approximate by bbp
    
    // determine the number of terms of the leibniz series required to approximate pi with absolute error less than 10^(-6)
    // and print the number of terms of the series that have been summed and the absolute error in each iteration.
    
    printf("\nApproximation of pi by Leibniz series:\n");
    
    double pi;
    double error;
    
    lti = clock();
    
    int i1 = 0;
    
    do
    {
        i1 += 100000;
        for(int j = 0; j < 300; j++)
            pi = pi_leibniz(i1);
        error = fabs(pi - M_PI);
        printf("%8d   %20.15f   %20.15f\n", i1, pi, error);
    }
    while(error > .000001);
    
    ltf = clock();
    
    // determine the number of terms of the leibniz series required to approximate pi with absolute error less than 10^(-6)
    // and print the number of terms of the series that have been summed and the absolute error in each iteration.
    
    printf("\nApproximation of pi by Bailey-Borwein-Plouffe series:\n");
    
    bti = clock();
    
    int i2 = 0;
    
    do
    {
        i2 += 1;
        for(int j = 0; j < 30000000; j++)
            pi = pi_bbp(i2);
        error = fabs(pi - M_PI);
        printf("%8d   %20.15f   %20.15f\n", i2, pi, error);
    }
    while(error > .000001);
    
    btf = clock();
    
    t1 = difftime(ltf, lti);
    t2 = difftime(btf, bti);
    
    printf("\n"); 
    printf("t1 and t2:\n %21.0f %21.0f\n\n", t1, t2); 

    return 0;
}

