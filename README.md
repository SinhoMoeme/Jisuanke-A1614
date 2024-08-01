# Jisuanke - <a href="https://www.jisuanke.com/problem/A1614" target="_blank">A1614</a>
## H - Arrangement for Contests - _2017 ACM-ICPC Asia Xi'an Regional Contest_
As a sponsor of programming contests, Yu has many factors to consider. Recently, he has found that the difficulties of problems can be a serious factor.

For novices, they may simply ignore the problems that are too hard; and for experts in programming contests, an easy problem almost means nothing. Moreover, if a contest consists of both easy and hard questions, it will not satisfy them – but make them unhappy for both reasons.

Therefore, Yu has come up with an idea: holding different kinds of contests! Novices tend to participant in a contest is known as an easy one, but will not join a hard one.

In details, suppose the difficulty of a problem can be measured as a positive integer, i. The bigger number means that the problem is harder. 
In Yu’s design, a contest consists of several problems with consistent difficulties. Formally, if a contest has $k$ problem, then their difficulties must be $i$, $i+1$, $…$, $i+k−1$. 
This is because if there are two problems with same difficulties, their functions in the contest will be the same, which is not good; and if two problems have a big gap in difficulties, there will be questions that are mentioned above. 
Now, a contest with difficulty $1,2,3,4,5$ is obviously a simple one, and a contest with $5,6,7,8,9$ can be a hard one.

Yu has a large amount of problems, and he measures all the difficulties. Now, he wants to hold as many contests as possible. Do you know how many contests can he hold?

## Input
In the first line there is an integer $T$ $(1≤T≤10)$, showing that there are $T$ test cases. Each test case consists of two lines.

For each test case, in the first line are two integers $N$, $K$ $(1≤K≤N≤100,000)$, where $N$ means the kinds of difficulties, and $K$ is the number of questions that a contest may have. 
In the second line, there are $N$ numbers $a[i] (0≤a[i]≤10^9)$, the $i$-th indicates the number of questions with difficulty $i$.

## Output
For each test case, the output should be an integer, indicating the maximum number of contests that Yu can hold.

