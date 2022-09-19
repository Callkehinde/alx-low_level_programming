#include "main.h"

/**
 * _strcpy - This function copies the pointer to variable
 * @src: is the pointer in the origin
 * @dest: is the pointer in the destination
 * Return: d
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
