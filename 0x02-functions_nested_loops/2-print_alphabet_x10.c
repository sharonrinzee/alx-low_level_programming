#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: X10 A-Z
 *
 */
void print_alphabet_x10(void)
{
	int n, v;

	v = 0;
	while (v < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		v++;
		_putchar('\n');
	}
}
