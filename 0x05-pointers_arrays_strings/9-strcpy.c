#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @dest: this is destny
 * @src: this is the copy
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
