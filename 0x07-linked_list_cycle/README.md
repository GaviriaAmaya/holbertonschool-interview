# 0x07. Linked List Cycle

## Content

- [0x07. Linked List Cycle](#0x07-linked-list-cycle)
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

We can imagine a linked list as multiple boxes (Structure defined as a ```listint_t```) tied between them with an specific rope (The memory address of the next node). The linked lists can be linear (Like a train), or can be cyclic (When one the ropes are tied to one box that was repeated before).\

To check if a list is cyclic, just left to do an iteration from start to the end of the list, with one iterator that goes fast (two nodes per iteration) and other that goes step by step. When a linked list is cyclic, both will find the other on the same node at some point. Otherwise, both will check the last box without find themselves

### Pseudo code

1. Start the two iterators
2. Startthe iteration until the end of the linked list
3. Check if the slow and the fast iterator are in the same box
4. Otherwise, repeat from step 2, adding one to the slow and 2 nodes for the fast
5. If the fast iterator reach the end and the check (Step 3) never happen, return 0

### Curiousities

- This is the classic approach for this problem
