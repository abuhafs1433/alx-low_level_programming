#include "main.h"

/**
 * main - check the code
 * @u: The character to print
 * Return: Always 0.
 */
void umer_mohammed(void){}
int i, j;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar('0');
_putchar(i + '0')
}
else if (i >= 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
if (j < 10)
{
_putchar(':');
_putchar('0');
_putchar(j + '0');
}
else if (j > 10)
{
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
}
}

