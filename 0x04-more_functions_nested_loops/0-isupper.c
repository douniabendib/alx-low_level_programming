#include "main.h"

/**
 * _isupper - check if alphabet is upper.
 * @c:the character
 * Return: 1 if c is upper,0 otherwise.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
