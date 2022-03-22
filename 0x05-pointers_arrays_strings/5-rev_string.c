#include "main.h"
/**
  * rev_string - reverses a string
  * @s: string is to be reversed
  * Return: 0
  */

void rev_string(char *s)
{
	char tmp;
	int i, len, len1;


	len = 0;
	len1 =  0;


	while 9(s[len] != '\0')
	{
		len++;
	}
	len = len - 1;

	for (i = 0; i < len /2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		[len1--] = tmp;
	}
}
