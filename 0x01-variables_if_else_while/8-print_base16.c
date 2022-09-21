#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;
	char s;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
