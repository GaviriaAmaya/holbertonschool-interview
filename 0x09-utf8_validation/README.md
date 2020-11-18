# 0x09. UTF-8 Validation

## Content

- [0x09. UTF-8 Validation](#0x09-utf-8-validation)
  - [Content](#content)
  - [Context](#context)
  - [Captain's log](#captains-log)
    - [Manual approaching](#manual-approaching)
    - [Pseudo code](#pseudo-code)
    - [Curiousities](#curiousities)

## Context

Write a method that determines if a given data set represents a valid UTF-8 encoding.

- Prototype: ```def validUTF8(data)```
- Return: ```True``` if data is a valid UTF-8 encoding, else return ```False```\
- A character in UTF-8 can be 1 to 4 bytes long\
- The data set can contain multiple characters\
- The data will be represented by a list of integers\
- Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer

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
