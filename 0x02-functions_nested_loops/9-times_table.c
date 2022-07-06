#include "main.h"

/**
 * main - check the code
 *
 * @s:hjhjhjh
 * Return: Always 0.
 */
void times_table(void)
int main(void)
{
int i, j;
int mat[SIZE][SIZE];
for (i = 0; i < SIZE; i++)
for (j = 0; j < SIZE; j++)
mat[i][j] = i + j;
for (i = 0; i < SIZE; i++)
{
for (j = 0; j < SIZE; j++)
print("%5d", mat [i][j]);
print("\n");

return (0);
}
}
