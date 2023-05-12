#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */
char *_strstr(char *haystack, char *needle)
{
	int itr;
	int jtr;

	for (itr = 0; haystack[itr] != '\0';)
	{
		for (jtr = 0; needle[jtr] != '\0'; jtr++)
		{
			if (needle[jtr] != haystack[itr + jtr])
			{
				break;
			}
		}
	if (needle[jtr] == '\0')
	{
		return (&haystack[itr]);
	}
	itr++;
	}
	return ('\0');
}
