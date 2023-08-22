#include "main.h"
/**
 * wap_int - swap the values of two integers
 * @a, b: int type pointer
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}
