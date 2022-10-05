#include "main.h"

/**
<<<<<<< HEAD
 * _memcpy - copies n bytes from src to dest
=======
 * _memcpy - copies n bytes from src to dest01~
>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
 * @dest: the place we copy to
 * @src: we copy from
 * @n: how much we copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
