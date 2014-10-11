h3. Midterm 1 for phys2200

This program approximates pi by summing a finite number of terms in the Leibniz series 
and in the Bailey-Borwein-Plouffe series. The number of terms is determined by the 
error between the approximation and the provided constant. When the absolute error is
less than 10^(-6), the program stops calculating.

The program also keeps track of the amount of time each approximation takes to reach
the desired error. The approximation functions are called multiple times so that the total
running time for each approximation is about 6 seconds.
