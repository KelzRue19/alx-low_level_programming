#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
int *kel;

kel = malloc(b);
if (kel == NULL)
exit(98);
return (kel);
}
