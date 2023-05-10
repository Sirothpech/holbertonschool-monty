#include "monty.h"

/**
 * isdigit_string - The function check if the string is a digit
 * @str: the string to check
 *
 * Return: 1 is a digit, 0 otherwise
 */
int isdigit_string(const char *str)
{
	if (str == NULL || str[0] == '\0')
		return (0); /* Invalid or empty string */

	int i = 0;

	/* Check if the first character is a minus sign */
	if (str[0] == '-')
	{
		/* Skip the minus sign and continue checking the remaining characters */
		i = 1;

		/* If the string has only a minus sign, it is not considered a valid digit */
		if (str[1] == '\0')
			return (0);
	}

	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0); /* The character is not a decimal digit */
	}

	return (1); /* All characters are decimal digits */
}
