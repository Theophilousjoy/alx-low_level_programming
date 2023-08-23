/**
 * cap_string - A function to capitalizes all words of a string.
 * @s: string
 * Return: return string
 */
char *cap_string(char *s)
{
	int b;

	b = 0;

	while (s[b] != '\0')
	{
		if ((s[b - 1] == ' ' || s[b - 1] == '\n'
		|| s[b - 1] == '\t' || s[b - 1] == ','
		|| s[b - 1] == ';' || s[b - 1] == '!'
		|| s[b - 1] == '?' || s[b - 1] == '"'
		|| s[b - 1] == '(' || s[b - 1] == ')'
		|| s[b - 1] == '{' || s[b - 1] == '}'
		|| s[b - 1] == '.')
		&& (s[b] >= 'a' && s[b] <= 'z'))
		{
			s[b] = s[b] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[b] = s[b];
		}
		b++;
	}
	return (s);
}
