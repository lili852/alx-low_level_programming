#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int itr = 0;
	int jtr;

	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (s[itr] == accept[jtr])
			{
				return (s + itr);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
