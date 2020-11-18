#include "palindrome.h"
/**
 * reverse - Reverse a number recursively
 * @n: Number to be reversed
 * @aux: Reversed number
 * Return: Reversed number
 */
unsigned long reverse(unsigned long n, unsigned long aux)
{
	unsigned long rev = 0;

	if (n == 0)
		return (aux);

	rev = (n % 10) + (aux * 10);

	return (reverse(n / 10, rev));
}

/**
 * is_palindrome - Proves if a number is palindrome
 * @n: Number to be checked
 * Return: 1 if n is palindrome, otherwise 0
 */
int is_palindrome(unsigned long n)
{
	unsigned long aux = 0, reversed = 0;

	reversed = reverse(n, aux);

	if (n == reversed)
		return (1);
	else
		return (0);
}
