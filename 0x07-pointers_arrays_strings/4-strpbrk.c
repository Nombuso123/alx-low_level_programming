#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k;

	for (; *s != '\0'; s++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{

			if (*s == accept[k])
				return (s);
		}
	}
	return (0);
}
