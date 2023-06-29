#include "main.h"
/**
  * _strcmp - main entry Comparing two strings
  * @s1: string 1
  * @s2: 2nd  string
  *
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, limit;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		limit = i;
	}
	else
	{
		limit = j;
	}

	while (k <= limit)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (l);
}
