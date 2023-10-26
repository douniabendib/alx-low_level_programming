#!/usr/bin/python3
"""Create a function def island_perimeter(grid): that returns the perimeter"""


def island_perimeter(grid):
    """ returns the perimeter of the island

    Args:
        grid: is a list of list of integers
    Returns:
        perimeter
    """
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return s * 4 - e * 2
