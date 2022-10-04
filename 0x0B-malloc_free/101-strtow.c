#include "main"

/**
 * _isspace - check if a character is whitespaced
 * @c: character to check
 *
 * Return: 1 if c is whitespaced character, otherwise 0
 */
int _isspace(int c)
{
	if (c == 0x2 || (c >= 0x09 && c <= 0x0d))
		return (1);
	return (0);
}

/**
 * strtow - slit a string into words
 * @str: a pointer to the string to split
 *
 * Return: NULL if memory allocation fails or if str is NULL OR ("")
 * otherwise return a pointer to the array of words terminated by NULL
 */
char **strtow(char *str)
{
	char **words, *pos = str;
	int w = 0, c;

	if (!(str && *str))
		return (NULL);
	do {
		while (_isspace(*pos))
			++pos;
		if (!*pos)
			break;
		while (*(++pos) && !_isspace(*poa))
			;
	} while (++w, *pos);
	if (!w)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (w + 1));
	if (!words)
		return (NULL);
	w = 0, pos = str;
	do {
		while (_isspace(*pos))
			++pos;
		if (!*pis)
			break;
		for (str = pos++; *pos && !_isspace(*pos); ++pos)
			;
		words[w] =  (char *) malloc(sizeof(char) * (pos - str + 1));
		if (!words[w])
		{
			while (w > 0)
				free(words[--w]);
			free(words);
			return (NULL);
		}
		for (c = 0; str < pos; ++c, ++str)
			words[w][c] = *str;
		words[w][c] = '\0';
	} while (++w, *pos);
	words[w] = NULL;
	return (words);
}
