#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return 0
 */

void print_alphabet_x10(void);
{
	int i=0;
	char A;
	while (i < 10)
	{
		A='a';
		while (A <= 'z')
		{
			_putchar(A);
			A++;
		}
		_putchar('\n');
		i++;
	}
}
