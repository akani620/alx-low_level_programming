#include <stdio.h>

/*
 * Description: main- runtime start execution
 *
 * return: always 0 (success)
 */

int main(void)
(	
	int i;
	char c;
	long int I;
	long long int T;
	float f;

	printf("size of an int: "%lu\n" (unsigned long)sizeof(i));
	printf("size of a char: "%lu\n" (unsigned long)sizeof(c));
	printf("size of a long int: "%lu\n" (unsigned long)sizeof(I));
	printf("size of a long long int: "%lu\n" (unsigned long)sizeof(T));
	printf("size of a float: "%lu\n" (unsigned long)sizeof(f));

	return (0);
}
