#!/usr/bin/python3
"""contains a function that calculate the perimeter of a grid"""


def island_perimeter(grid):
    """calculates the perimeter of the island defind by the grid

    Args:
        grid: a list of list of integer where 0 represents water zone and
              1 represents a land zone
              One cell is a square with side length 1
              Grid cells are connected horizontally/vertically (not diagonally)
              Grid is rectangular, width and height don't exceed 100
              Grid is completely surrounded by water, and there is one island
              (or nothing).
              The island doesn’t have “lakes” (water inside that
              isn’t connected to the water around the island).

    Returns: the calculated perimeter
    """
    cell_size = 1
    perimeter = 0
    length = 0
    width = 0
    land = 1
    if grid:
        height = len(grid) - 2

    if grid and grid[0]:
        width = len(grid[0]) - 2

    for i in range(height):
        for j in range(width):
            if grid[i+1][j+1] == land:
                if grid[i][j+1] != land:
                    perimeter += cell_size
                if grid[i+1][j] != land:
                    perimeter += cell_size
                if grid[i+2][j+1] != land:
                    perimeter += cell_size
                if grid[i+1][j+2] != land:
                    perimeter += cell_size

    return perimeter
