#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_neighbors(grid, i, j):
    """Returns the number of neighbors a cell has in a grid."""

    num = 0

    if grid[i - 1][j]:
        num += 1
    if grid[i][j - 1]:
        num += 1
    if grid[i][j + 1]:
        num += 1
    if grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perim += 4 - num_neighbors(grid, i, j)

    return perim
