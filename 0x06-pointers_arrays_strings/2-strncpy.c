#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int dn = 0, src_len = 0;

while (src[dn++])
src_len++;

for (dn = 0; src[dn] && dn < n; dn++)
dest[dn] = src[dn];

for (dn = src_len; dn < n; dn++)
dest[dn] = '\0';

return (dest);
}
