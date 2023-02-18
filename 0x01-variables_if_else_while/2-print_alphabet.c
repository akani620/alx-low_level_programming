#include <stdio.h>
/**
 * main - entry point
 *
 * description : print lower case alphabets
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	
	while (a <= 'z')
	{	
		putchar(a);
		a++;
	}

putchar('\n');
return (0);
}
