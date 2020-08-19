#include "sandpiles.h"
/**
 * print_grid - Prints a sandpile
 * @grid: Sandpile to be checked
 * Return: None (Void)
 */
static void print_grid(int grid1[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid1[i][j]);
		}
		printf("\n");
	}
}

/**
 * is_stable - Checks if a sandpile is stable (Each value is less than 3)
 * @grid: Sandpile to be checked
 * Return: True if is stable, False if not
 */
bool is_stable(int grid[3][3])
{
	int i, j = 0;
	bool stable = true;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				stable = false;
				break;
		}
	}
	return(stable);
}

/**
 * add_sandpile - Adds two sandpiles
 * @grid1: Sandpile A
 * @grid2: Sandpile B
 * Return: None (Void)
 */
void add_sandpile(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}
}

/**
 * toppling - If sandpile is unstable, compare cell with adjacents
 * @grid1: Unstable sandpile
 * Return: None (Void)
 **/
void toppling(int grid1[3][3])
{
	int i, j, default_grid[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			default_grid[i][j] = 0;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				default_grid[i][j] -= 4;

				if (i + 1 < 3)
					default_grid[i + 1][j] += 1;
				if (i - 1 >= 0)
					default_grid[i - 1][j] += 1;
				if (j + 1 < 3)
					default_grid[i][j + 1] += 1;
				if (j - 1 >= 0)
					default_grid[i][j - 1] += 1;
			}
		}
	}

	add_sandpile(grid1, default_grid);
}

/**
 * sandpiles_sum - Add two sandpiles
 * @grid1: Sandpile A
 * @grid2: Sandpile X
 * Return: None
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	add_sandpile(grid1, grid2);

	while (is_stable(grid1) == false)
	{
		printf("=\n");
		print_grid(grid1);
		toppling(grid1);
	}
}
