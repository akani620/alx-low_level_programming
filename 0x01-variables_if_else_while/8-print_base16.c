#include <stdio.h>
/**
 *main - entry point
 *
 *Descrription : print hexadecimal
 *
 *Return: 0
 *
 */
int main(void)      /*main- start of program */
{
char i = '0';
char a = 'a';
while (i <= '9')
	{putchar (i);
	 i++;
	}
while (a <= 'f')
	{ putchar (a);
	  a++;
	}
putchar ('\n');
return (0);
}
