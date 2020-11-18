# 0x08. Palindrome integer

## Content

- [0x08. Palindrome integer](#0x08-palindrome-integer)
  - [Content](#content)
  - [Context](#context)
  - [Captain's log](#captains-log)
    - [Manual approaching](#manual-approaching)
    - [Pseudo code](#pseudo-code)
    - [Curiousities](#curiousities)

## Context

Write a function that checks whether or not a given unsigned integer is a palindrome.

Prototype: ```int is_palindrome(unsigned long n);```\
Where n is the number to be checked\
Your function must return 1 if n is a palindrome, and 0 otherwise\
You are not allowed to allocate memory dynamically (malloc, calloc, …)

## Captain's log

### Manual approaching

To look if a number is palindrome or not is enough with look at it and check if it is. But, this is a good example of how you have to "talk with a machine". To solve this problem, we have to perform aritmetical operations. Every modern programming language, or almost every that I know, have two division operators: The division and the module. In this case, we can use the module operator to take the restant number of the first integer that we want to check. The module of any number divided by ten is the last unit.\

As example, if we divide 51 / 10 is an unexact operation, and give the module = 1:\

```51  % 10 = 1``` while ```51 / 10 = 5```\

So, if we repeat this process over and over, we can swap the entire number. An interesting way to solve this problem is through recursive functions. The recursive funtion, by default, return our number swaped: When we take the base case ```if (n == 0)```, the last digit will be saved .

### Pseudo code

1. Base case: Until n is equal to 0
2. Recursive call

### Curiousities

- This is the classic approach for this problem
