int check_seperators(char c);

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;

		if (check_seperators(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}

	return (str);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}

