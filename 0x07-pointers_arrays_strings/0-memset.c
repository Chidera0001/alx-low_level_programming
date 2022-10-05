#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: the byte
 * @n: # of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
<<<<<<< HEAD
	*ptr++ = b;
=======
	*ptr++ + b;
>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
	return (s);
}
