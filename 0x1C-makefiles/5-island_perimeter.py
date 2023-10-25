#!/usr/bin/python3
"""Module that defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A list of lists of integers representing the grid.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - 0 represents water zone
    - 1 represents land zone
    - One cell is a square with side length of 1
    - Grid cells are connected horizontally/vertically (not diagonally)
    - Grid is rectangular, with a width and height not exceeding 100
    - Grid is completely surrounded by water, and there is ohi
    - The island doesn’t have "lakes"
    """
    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
