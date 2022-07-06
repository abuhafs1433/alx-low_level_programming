#include "main.h"
/**
*  times_table -> prints  times_table
*/
void times_table(void)
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
}
return (0);
}
