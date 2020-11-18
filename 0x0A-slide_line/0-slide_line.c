#include "slide_line.h"
#include <stdlib.h>

/**
 * lefty - Move the coincidences to the left
 * @line: Array of elements
 * @size: Number of elements in line
 */
void lefty(int *line, size_t size)
{
	size_t i, j, k;

	for (i = 0, j = 0; i < size;)
	{
		if (line[i] == 0)
			for (; line[i] == 0; i++)
				;

		if (i == (size - 1))
			break;

		j = i + 1;

		if (line[j] == 0)
			for (; line[j] == 0; j++)
				;

		if (line[i] == line[j])
		{
			line[i] = line[i] + line[j];
			line[j] = 0;
			i = j + 1;
		}
		else
			i++;
		j = 0;
	}

	for (i = 0, k = 0; i < size; i++)
		if (line[i] != 0)
			line[k++] = line[i];

	while (k < size)
		line[k++] = 0;
}

/**
 * righty - Move coincidences to the right
 * @line: Array of elements
 * @size: Number of elements in line
 */
void righty(int *line, size_t size)
{
	size_t i, j;

	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			if (line[i - 1] != 0)
			{
				if (line[i - 1] == line[j - 1])
				{
					line[i - 1] = line[i - 1] + line[j - 1];
					line[j - 1] = 0;
					break;
				}
				if (line[i - 1] != line[j - 1] &&
				    line[j - 1] != 0)
					break;
			}
			if (line[i - 1] == 0)
			{
				if (line[j - 1] != 0)
				{
					line[i - 1] = line[j - 1];
					line[j - 1] = 0;
					i++;
					break;
				}
			}
		}
	}
}

/**
 * slide_line - Funct that slides an array of numbers and merges if are equals
 * @line: Array of numbers
 * @size: Number of elements in line
 * @direction: Movement of the slide
 * Return: If success, 1
 */

int slide_line(int *line, size_t size, int direction)
{
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == 0)
		lefty(line, size);
	if (direction == 1)
		righty(line, size);

	return (1);
}
