# prime-formula
Basic implementation of an algorithm for finding prime numbers

This software finds the $n$th prime using Willans' Formula, defined as follows:

$$ P = 1 + \sum_{i=1}^{2^n}floor\left( \left( \frac{n}{\sum_{j=1}{i}floor((\cos\pi\frac{(j-1)!+1}{j})^2)\right)^{\frac{1}{n}}\right)$$
