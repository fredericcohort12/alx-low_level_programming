
Skip to content
Lordwill1 /
alx-low_level_programming
Public

Code
Issues
Pull requests 1
Actions
Projects
Security

More
Beta Try the new code view
alx-low_level_programming/0x05-pointers_arrays_strings/7-puts_half.c
@Lordwill1
Lordwill1 Debugged task 7
History
1 contributor
33 lines (29 sloc) 435 Bytes
#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
