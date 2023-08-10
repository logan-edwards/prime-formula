# prime-formula
Basic implementation of an algorithm for finding prime numbers

Utilizes Willans formula, an inefficiently computable but exact algorithm for the prime numbers, to find the $P$ th prime number:

$$P = 1+\displaystyle\sum_{i=1}^{2^n}\left\lfloor\left( \frac{1}{\displaystyle\sum_{j=1}^{i}\left\lfloor\left(\cos\pi\frac{(j-1)!+1}{j}\right)^2\right\rfloor}\right)^{\frac{1}{n}}\right\rfloor$$
