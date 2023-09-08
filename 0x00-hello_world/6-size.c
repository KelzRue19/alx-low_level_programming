#include <stdio.h>
/**
 * main - this describes my main function of this task
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
