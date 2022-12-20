#include "main.h"
#include <stido.h>

/**
 * _atio - convert a string to an integer.
 * @s: inputs string.
 * Return: integer.
 */
int _atio(char *s)
{
	unsigned int count = 0, size =0, oi = 0, pn =1, m = 1, i;

	while (*(s + count ) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		       break;
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0) 
				m *= 10;
			size++;
		}
		count++;
	}
	
	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48 * m);
		m /= 10;
	}
	return (oi * pn);
}		

