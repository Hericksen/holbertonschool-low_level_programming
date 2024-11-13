#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2n string
 * @n: number of n bytes of s2
 * Return: NULL if empty strings, else return pointer of string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* If s1 or s2 is NULL, considered them as empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 & s2 */
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	/* If n is greater than length of 2n use all s2*/
	if (n >= len2)
		n = len2;

	/* Allocate memory */
	result = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);
	/* Copy s1 into the result string */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	/* Copy the 1st n bytes of s2 into the result string */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
