# 0. Minimum Operations

In a text file, there is a single character H. Your text editor can execute only two operations in this file: Copy All and Paste. Given a number n, write a method that calculates the fewest number of operations needed to result in exactly n H characters in the file.

* Prototype: ```def minOperations(n)```
* Returns an integer
* If n is impossible to achieve, return 0

Example:

```n = 9```

```H``` => ```Copy All``` => ```Paste``` => ```HH``` => ```Paste``` => ```HHH``` => ```Copy All``` => ```Paste``` => ```HHHHHH``` => ```Paste``` => ```HHHHHHHHH```

Number of operations: ```6```

## Captain's log

### Manual approaching

Starting, the minimum operations is always two: Copy the first H and paste it.
Then, you just paste it again. In case that the amount of H is perfectly divisible by n, we can Copy all again and paste, adding one more operation. Else, the number of operations adds one at time.

### Pseudo code

1. Go through the range of n

2. Save into a variable the amount of operations that have to be done, setted by 2

3. If n divided by the iteration is perfect, add one at the number of operations

4. Else, still iterating on it
