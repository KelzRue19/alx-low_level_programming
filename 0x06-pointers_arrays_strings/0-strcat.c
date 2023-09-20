#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including terminating
 *          null byte, to the end of the string pointed
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int es = 0, len = 0;

while (dest[es++])
len++;

for (es = 0; src[es]; es++)
dest[len++] = src[es];

return (dest);
}
