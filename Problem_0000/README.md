# Question:
A number is a perfect square, or a square number, if it is the square of a positive integer.
For example, 25  is a square number because $5^2 = 5 x 5 = 25$ ; it is also an odd square.

The first 5 square numbers are: 1, 4, 9, 16, 25, and the sum of the odd squares is 35 .

Among the first 901 thousand square numbers, what is the sum of all the odd squares?

$$ 1 + 2^2 + 3^2 + ... + k^2 + ... + n^2$$

From some reasoning, we can know this term is $$an^3 + bn^2 + cn + d$$

Then we can solve for a, b, c, and d.

We got $$n(n+1)(2n+1)/6$$

To get the odd $k^2$, we can get $\sum((2*n - 1)^2)$. Expand the square term and sum them up individually.

we will get $$\sum(4n^2 - 4n + 1)$$

In the end, it is $$n(4n^2 - 1)/3 $$

