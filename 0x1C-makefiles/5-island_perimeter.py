#!/usr/bin/python3
"""
Grid perimeter calculator module
"""

def island_perimeter(grid) -> int:
    """Calculate the perimeter of an island represented by a grid.

    Args:
        grid (list): A list of lists representing the grid where:
                     - 0 represents water
                     - 1 represents land

    Returns:
        int: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return size * 4 - edges * 2
