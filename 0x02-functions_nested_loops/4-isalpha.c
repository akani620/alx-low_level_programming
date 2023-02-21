#include "main.h"

/**
 *main- entry point of program
 *
 * _isalpha- print alphabetic character
 *
 * Return: 0
 *
 *@c - argument of function
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
