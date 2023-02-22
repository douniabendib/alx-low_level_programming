#include "main.h"
/**
 * is_alpha - alphabet is uppercase.
 * @c: checked the character.
 * Return: 1 if c is a letter,otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
