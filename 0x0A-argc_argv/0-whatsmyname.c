#include <stdio.h>

/**
 *main - Prints the program name, followed by a new line
 *@argc: Counter to argument of main
 *@argv: Arguments of main
 *return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	
	return (0);
}
