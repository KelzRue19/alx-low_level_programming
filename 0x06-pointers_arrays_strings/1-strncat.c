#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dn = 0, dest_len = 0;

while (dest[dn++])
dest_len++;

for (dn = 0; src[dn] && dn < n; dn++)
dest[dest_len++] = src[dn];

return (dest);
}
