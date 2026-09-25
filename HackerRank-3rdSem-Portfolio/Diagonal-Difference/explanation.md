# Diagonal Difference

## Problem Statement

Given a square matrix, calculate the absolute difference between the sums of its primary diagonal and secondary diagonal elements.

Primary Diagonal: Elements where row index = column index.

Secondary Diagonal: Elements where row index + column index = n - 1.

## Approach

1. Read the size of the matrix.
2. Traverse the matrix once.
3. Add elements of the primary diagonal to sum1.
4. Add elements of the secondary diagonal to sum2.
5. Compute the absolute difference:

   difference = |sum1 - sum2|

6. Print the result.

## Time Complexity

O(N)

The matrix is traversed only once for diagonal calculations.

## Space Complexity

O(1)

No extra data structures are used apart from a few variables.

## Key Concepts Used

- 2D Arrays
- Matrix Traversal
- Diagonal Elements
- Absolute Difference

## Outcome

The solution efficiently calculates the difference between the two diagonal sums using a single traversal and constant extra space.