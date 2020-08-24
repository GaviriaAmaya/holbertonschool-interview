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
Then, you just paste it again. In case that the amount of H is perfectly divisible by n, we can Copy all again and paste, adding one more operation. Else, the number of operations adds one at a time.

### Pseudo code

1. Copy and paste the first h

2. If n is perfectly divisible by the amount of h, copy and paste again.

3. Save the clipboard and duplicate the amount of h

4. Else, just paste, adding the clipboard to the amount of h

### Curious things

* 27579073 is a prime number. As it is never divided by any number, never gets the conditional. So, there's not another operation than paste
