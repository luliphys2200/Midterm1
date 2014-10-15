### Midterm 1 for phys2200

This program approximates pi by summing a finite number of terms in the Leibniz series 
and in the Bailey-Borwein-Plouffe series. The number of terms is determined by the 
error between the approximation and the provided value of pi. When the absolute error is
less than 10^(-6), the program terminates.

The program also keeps track of the amount of time each approximation takes to reach
the desired error. The approximation functions are called multiple times so that the total
running time for each approximation is about 6 seconds.

A comparison of the two approximation methods shows that the BBP method takes much less
time to run than the Leibniz method. The Leibniz method took approximately 2.23E-2 s/call
while the BBP method only took 2.02E-7 s/call. While the Leibniz function would probably 
outperform the BBP function in one call with the same input size, the approximation is so 
much worse that the input size must be 1000000 before it is close enough to the specified 
parameters for the program to terminate. With the BBP function, the input size was only 3. 
The Leibniz approximation ended up being 110531 times slower on average per function call 
than the BBP approximation because of this.
