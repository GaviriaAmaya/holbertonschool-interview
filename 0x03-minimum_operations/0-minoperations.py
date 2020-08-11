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
        minOperations(100) = 14
    """
    if n <= 1:
        return 0
    else:
        copy = 1
        paste = 1
        clipboard = 1
        h = 2
        while(h != n):
            if n % h == 0:
                copy += 1
                clipboard = h
                paste += 1
                h = h * 2
            else:
                h += clipboard
                paste += 1
        return (copy + paste)
