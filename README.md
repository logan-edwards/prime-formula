# prime-formula
Basic implementation of an algorithm for finding prime numbers

This software finds the $n$ th prime using Willans' Formula, defined as follows:

$$P = 1+\displaystyle\sum_{i=1}^{2^n}\left\lfloor\left( \frac{1}{\displaystyle\sum_{j=1}^{i}\left\lfloor\left(\cos\pi\frac{(j-1)!+1}{j}\right)^2\right\rfloor}\right)^{\frac{1}{n}}\right\rfloor$$
