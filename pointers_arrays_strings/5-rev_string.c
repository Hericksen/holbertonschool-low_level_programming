/**
 * rev_string - reverses a string
 * @s: string gonna be reverse
*/

void rev_string(char *s)
{
	int i, length = 0;
	char temp;

	while (s[length] != '\0')
		length++;
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}