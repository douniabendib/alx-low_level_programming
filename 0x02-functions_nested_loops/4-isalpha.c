#include "main.h"
/**
 * is_alpha - check id alphabet is uppercase.
 * @c: checked the uppercase.
 * Return: 1 if c is a letter,otherwise 0.
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
