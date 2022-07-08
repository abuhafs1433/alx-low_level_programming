#include <stdio.h>

/**
* main - Entry point.
* 
* Return: Always 0.
*/

int main(void)

{
long n, i;

n = 612852475143;
for (i = 2; i == 0)
{
while (n % i == 0)
n = n / i;
}

printf("%lu\n" , n);

return (0);
}
