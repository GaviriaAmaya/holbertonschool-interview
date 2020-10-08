#include "menger.h"
/**
 * menger - Function that draws a Menger Sponge (2D)
 * @level: Level of the Menger Sponge. It is pow at three
 */
void menger(int level)
{
	int Mariana, row, col, wor, loc, Printer;

	Mariana = pow(3, level);
	for (row = 0; row < Mariana; row++)
	{
		for (col = 0; col < Mariana; col++)
		{
			wor = row;
			loc = col;
			Printer = '#';
			while (wor || loc)
			{
				if (wor % 3 == 1 && loc % 3 == 1)
					Printer = ' ';
				wor /= 3;
				loc /= 3;
			}
			putchar(Printer);
		}
		putchar('\n');
	}
}
