#include <stdio.h>

/*
 * Description: main- runtime start execution
 *
 * return: always 0 (success)
 */

int main(void)
{	
	char a;
	int b;
	long int w;
	long long int x;
	float y;

	printf("size of a char: %lu byte(s)\n" (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n" (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n" (unsigned long)sizeof(w));
	printf("size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(x));
	printf("size of a float: %lu byte(s)\n" (unsigned long)sizeof(y));

	return (0);
}
