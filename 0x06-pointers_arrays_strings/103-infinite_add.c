#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adding strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return:  ROT13 base.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i_length = 0, j_length = 0, carry = 0, i, j, total, biggest;
	
	while (n1[i_length] != '\0')
		i_length++;
	while (n2[j_length] != '\0')
		j_length++;
	if (i_length > j_length)
		biggest = i_length;
	else
		biggest = j_length;
	if ((biggest + 1) >= size_r)
		return (0);
	r[biggest + 1] = '\0';
	
	while (biggest >= 0)
	{
		i = (n1[i_length - 1] - '0');
		j = (n1[j_length - 1] - '0');
		if (i_length > 0 && j_length > 0)
			total = i + j + carry;
		else if (i_length < 0 && j_length > 0)
			total = j + carry;
		else if (i_length > 0 && j_length < 0)
			total = i + carry;
		else
			total = carry;
		
		if (total > 9)
		{
			carry = total / 10;
			total = (total % 10) + '0';
		}
		else
		{
			carry = 0;
			total = total + '0';
		}
		r[biggest] = total;
		i_length--;
		j_length--;
		biggest--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
