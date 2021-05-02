#!/usr/bin/python3
"""
This function returns the perimeter of the island
described in grid
"""
def island_perimeter(grid):
    perim = 0
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
