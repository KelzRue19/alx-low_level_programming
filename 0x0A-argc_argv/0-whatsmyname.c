#include <stdio.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int kelly;

for (kelly = 0; kelly < argc ; kelly++)
{
printf("%s\n", argv[kelly]);
}
return (0);
}
