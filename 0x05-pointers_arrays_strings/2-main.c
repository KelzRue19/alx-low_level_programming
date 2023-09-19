#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = strlen(str); // Use strlen from <string.h>
	printf("%d\n", len);
	return (0);
}
