#ifndef SANDPILES_H
#define SANDPILES_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
static void print_grid(int grid1[3][3]);
bool is_stable(int grid[3][3]);
void add_sandpile(int grid1[3][3], int grid2[3][3]);
void toppling(int grid1[3][3]);

#endif
