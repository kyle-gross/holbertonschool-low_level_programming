#!/usr/bin/python3
"""
This function returns the perimeter of an island
1 represents land and 0 represents water
grid: matrix of 0's and 1's
Return: perimeter of island
"""


def island_perimeter(grid):
    """
    Let's find the perimeter of an island! :D
    """
    perim = 0
    # Loop through grid and look around when 1's are encountered
    # If there's 0's or matrix edge around a 1, perimeter increases
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    perim += 1
                if grid[row + 1][col] == 0:
                    perim += 1
                if grid[row][col - 1] == 0:
                    perim += 1
                if grid[row][col + 1] == 0:
                    perim += 1
    return perim
