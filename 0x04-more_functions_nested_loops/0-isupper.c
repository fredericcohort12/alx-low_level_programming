#include "main.h"

/**
 * _isdigit - uppercase letters
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit (int c)
{
        if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
        else
	{
                return (0);
	}
}
