#include "main.h"

/**
  * swap_int - swaps the value of two integer
  * @a: A pointer to first value
  * @b: B pointer to second value
  */

void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
