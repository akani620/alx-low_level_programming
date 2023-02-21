#include "main.h"

/**
 * main - print alphabetic character
 *
 * Return: 0
 */
 int _isalpha(int c)
{
	int c;
	
	if ( c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
