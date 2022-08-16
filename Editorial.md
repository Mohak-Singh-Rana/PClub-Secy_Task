
# **Cheater Shop Owner**
## **Editorial**


For the money won by the person to be minimised, the maximum number
should be allotted to the tile which is counted the least number of
times and the tile which is counted the maximum number of times should
be allotted the minimum value among the numbers.\
\
Writing this statement mathematically, suppose **b** is an array, in
i-th cell of which is written the number of times the i-th tile has been
counted. Suppose the array containing the numbers is **a**. To proceed
further, let's sort these arrays (Wait here and think why there is a
need to sort the arrays). So, the answer should be $\sum_{i=0}^{n-1}$
a[i]\*b[n-1-i].\
\
So, now the next thing to ponder over is how to calculate the array b
fast enough.\
For that, let's create an array **shoot**. When we have the pair $l_i$,
$r_i$, we increase shoot $[l_i]$ by 1 and decrease shoot $[r_i + 1]$
by 1. Now, do this for all the pairs $l_i$, $r_i$. After doing this for
all the pairs, we take a temporary variable and in each iteration we add
the value of **shoot\[i\]** to it. In each iteration, the value of temp
will be equal to b\[i\].\
Still not understood? Let me explain this in detail. When in a
particular pair, we increase the value of shoot $[l_i]$ by 1, its
effect on the array b is that it increases all the elements of b with
index $\ge$ $l_i$ by 1 but we have to increase the elements only till
the index $r_i$. To counter this, we decreased the $r_{i+1}$-th element
by 1 whose impact on b is it decreases all the elements with index $>$
$r_i$ by 1. So, net effect will be all the elements with index $\ge$
$l_i$ and $\le$ $r_i$ are increased by 1 which we wanted.\
Now, we have all the things that we wanted to get the answer.\
\
Time complexity of the solution is O(nlogn + q).
