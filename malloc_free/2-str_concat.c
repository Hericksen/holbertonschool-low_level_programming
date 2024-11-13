#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: NULL if s1 or s2 NULL, else return concatenation
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat_str = malloc((len1 + len2) + 1);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[len1 + j] = s2[j];

	concat_str[len1 + len2] = '\0';

	return (concat_str);

}
