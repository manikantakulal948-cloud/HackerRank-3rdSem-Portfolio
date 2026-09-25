# Dynamic Array

## Problem Statement
The problem involves managing multiple dynamic sequences and processing two types of queries:

1. Append an integer to a sequence.
2. Retrieve and print an element from a sequence.

The sequence is selected using the formula:

index = (x ^ lastAnswer) % n

where:
- x is given in the query
- lastAnswer stores the result of the previous type 2 query
- n is the number of sequences

## Approach

1. Create n empty dynamic arrays (sequences).
2. For a Type 1 query:
   - Find the sequence index.
   - Append the value y to that sequence.
3. For a Type 2 query:
   - Find the sequence index.
   - Retrieve the required element.
   - Update lastAnswer.
   - Print lastAnswer.

The XOR operation helps distribute queries among different sequences efficiently.

## Time Complexity

- Type 1 Query: O(1)
- Type 2 Query: O(1)

Overall Complexity: O(Q)

where Q is the number of queries.

## Space Complexity

O(N + Q)

where:
- N = number of sequences
- Q = total elements stored

## Key Concepts Used

- Dynamic Arrays
- XOR Operator (^)
- Array Indexing
- Query Processing

## Outcome

The solution efficiently handles all queries while maintaining optimal time and space complexity as required by HackerRank.