#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 (successful) or 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
