#include "main.h"

/**
* _isalpha - checks for alphabetica letter
* @c: a character to be chek on
* Return: returns 0 or 1 depending
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
