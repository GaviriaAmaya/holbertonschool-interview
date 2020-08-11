#!/usr/bin/python3
"""
In a text file, there is a single character H.
Your text editor can execute only two operations in this file:
Copy All and Paste.
Given a number n, write a method that calculates the fewest number of
operations needed to result in exactly n H characters in the file.
"""

def minOperations(n):
    """ Calculates the fewest number of operations:
        minOperations(12) = 7
    """
    if n <= 1:
        return 0
    else:
        # The minimum operations of any n, initially is
        # Copy All and Paste
        ops = 2
        for i in range(2, n + 1):
            if n % i == 0:
                ops += 1
                i += 1
        return ops
