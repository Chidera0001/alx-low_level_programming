#include "main.h"
#include <stddef.h>
/**
<<<<<<< HEAD
 * _strstr - finds the first occurence of needle in haystack
=======
 * _str - finds the first occurence of needle in haystack
>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
 * @haystack: where we look
 * @needle: what we look for
 *
 *
 * Return: pointer to beginning of located substring or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
