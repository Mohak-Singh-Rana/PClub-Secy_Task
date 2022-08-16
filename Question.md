# Cheater Shop Owner

Time limit per test: 1 second\
Memory limit per test: 256 megabytes\
Input: standard input\
Output: standard output
<hr/>

You started a game shop. In the game, the person wins money equal to his
score. Score is calculated as follows.\
There is a wall which has n tiles. The person has q pair of arrows. The
person shoots the arrows pairwise. The score of the person in
incremented by the sum of numbers behind the tiles which are between the
shooted tiles (including the shooted tiles).\
But you are a cheater. You don't want to give the actual money won by
the person. So, you change the numbers after the person has shooted all
the arrows such that the money won by him is the smallest possible.\
Find this minimum sum of money won by the person.\
\
**Input:** 
\
The first line contains two space-separated integers n (1 $\leq$ n $\le$
$2.10^5$) and q (1 $\le$ n $\le$ $2.10^5$) --- the number of tiles on
the wall and the number of pair of arrows, correspondingly.\
The next line contains n space-separated integers $a_i$ (1 $\le$ i $\le$
$2.10^5$) --- the numbers behind the tiles.\
Each of the following q lines contains two space-separated integers
$l_i$ and $r_i$ (1 $\le$ $l_i$ $\le$ $r_i$ $\le$ n) --- $l_i$, $r_i$ being the
index of the tiles shot.\
\
**Output:** 
\
In a single line print, a single integer ---the minimum
money won by the person.\
\
**Examples**\
**Input**\
3 3\
5 3 2\
1 2\
2 3\
1 3\
**Output**\
22\
\
**Input**\
5 3\
5 2 4 1 3\
1 5\
2 3\
2 3\
**Output**\
21
