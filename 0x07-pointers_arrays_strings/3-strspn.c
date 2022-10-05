#include "main.h"

/**
<<<<<<< HEAD
 * _strspn - gets the length of a prefix substring
=======
 * _memset - strspn - gets the length of a prefix substring
>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
 * @s: the string we look at
 * @accept: the string we compare to
 *
 * Return: unsigned int
 *
 */
<<<<<<< HEAD
unsigned int _strspn(char *s, char *accept)
=======
unsigned int_strspn(char *s, char *accept)
>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
{
	int i = 0;
	int j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		        if (s[i] != accept[j])
			break;
	}
	return (i);
}
<<<<<<< HEAD
=======

>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
