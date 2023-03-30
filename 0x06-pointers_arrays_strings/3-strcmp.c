#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int len_s1;
	int len_s2;
	int comp;

	len_s1 = 0;
	len_s2 = 0;
	comp = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;
	if (len_s1 <= len_s2)
	{
		for (i = 0; i <= len_s1; i++)
		{
			comp = s1[i] - s2[i];
			if (comp == 0)
			{
				if (i != len_s1)
					continue;
				else
				{
					if (len_s1 != len_s2)
					{
						comp = 0 - s2[i + 1];
					}
					else
					{
						break;
					}
				}
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		for (i = 0; i <= len_s2; i++)
		{
			comp = s1[i] - s2[i];
			if (comp == 0)
			{
				if (i != len_s2)
					continue;
				else
				{
					comp = s1[i + 1] - 0;
				}
			}
			else
			{
				break;
			}
		}
	}
	return (comp);
}
