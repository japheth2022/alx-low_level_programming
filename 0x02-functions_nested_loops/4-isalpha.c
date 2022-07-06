#include "main.h"
/**
 * _isalpha - checks alphabets
 * *@c:character to be checked
 * * Return: returns 1 and 0 depending on conitions
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
