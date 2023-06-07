#include <stdio.h>

/**
 * prime_checker - checks if a number is prime recursively
 *
 * @number1: number to determine if prime
 * @number2: number to check if divisor
 *
 * Return: 1 if prime or 0 otherwise
 */
int prime_checker(int number1, int number2)
{
	if (number1 == number2)
		return (1);
	if (!(number1 % number2))
		return (0);
	return (prime_checker(number1, (number2 + 1)));

}
/**
 * is_prime_number - checks input integer  for prime number or not
 *
 * @n: number to be checked
 *
 * Return: 1 if prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
	return (prime_checker(n, 2));
	}
}
