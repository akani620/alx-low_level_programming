#include <main.h>

/**
 * main - print putchar followed by a new line
 *
 * Return : 0
 */
int main(void)
{
	char myvar[] = "_putchar";
	int i = 0;

	while (myvar[i] != '\0')
	{
		_putchar(myVar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
