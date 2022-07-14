#include "main.h"
#include <string.h>
/**
 * _strncat -> function to append some charx
 * @dest: first parm
 * @src: second parm
 * @n: 3rd param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
