#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int itr = 0;

	while (s[itr] != '\0')
	{
		itr++;
		if (s[itr] == c)
		{
			return (&s[itr]);
		}
	}
	return ('\0');
}
