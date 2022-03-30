#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory re of copy
 * @n: number of byte to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
