# 0x04. Sandpiles

## Content

- [0x04. Sandpiles](#0x04-sandpiles)
  - [Content](#content)
  - [Context](#context)
  - [Captain's log](#captains-log)
    - [Manual approaching](#manual-approaching)
    - [Pseudo code](#pseudo-code)
    - [Curiousities](#curiousities)

## Context

Sandpile is a math model designed to analyze the criticality self-organization through graph theory and cellular automaton

![An example of the fractal structure of a Sandpile. Image by Wikipedia](https://upload.wikimedia.org/wikipedia/commons/c/c2/Sandpile_identity_300x205.png "Sandpile")\
*An example of the fractal structure of a Sandpile. Image by Wikipedia*

An useful resource, [here](https://www.youtube.com/watch?v=1MtEUErz7Gg)

Given that, write a function that computes the sum of two sandpiles

Prototype: ```void sandpiles_sum(int grid1[3][3], int grid2[3][3]);```\
You can assume that both grid1 and grid2 are individually stable
A sandpile is considered stable when none of its cells contains more than 3 grains
When your function is done, grid1 must be stable
grid1 must be printed before each toppling round, only if it is unstable (See example)
You’re not allowed to allocate memory dynamically

## Captain's log

### Manual approaching

The sum of each part of the grid is not a problem. Just left to iterate through each part of the array and do the arithmetic operation. The difficult part is with the stability and the toppling. In that case, is necessary a function that check if the resulting grid is stable or not, iterating through, and checking if each cell is not major than 3. In case that the grid is unstable, a function that process the toppling, giving one sand to each horizontal and vertical cell around (Neighbors). Then, the resulting sandpile is checked again

### Pseudo code

1. Add each cell of both grids, into a new one
2. Check if is stable (Each cell is less than 3)
3. If a cell is not stable, perform toppling (Add one to the neighbors)
4. Else, return the resulting Sandpile

### Curiousities

- This approach is complex about time execution
- One bad thing is to perform the iteration every time's one cell is not stable. If save that position, could be better
