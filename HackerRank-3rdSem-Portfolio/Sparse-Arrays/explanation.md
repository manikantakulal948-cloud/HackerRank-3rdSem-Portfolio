# Sparse Arrays

## Problem Statement

Given a collection of input strings and a set of query strings, determine how many times each query string appears in the collection.

For every query, print its frequency in the input string list.

## Approach

1. Read all input strings and store them.
2. Read each query string.
3. Compare the query with all stored strings.
4. Count the number of matches.
5. Print the count for each query.

A more efficient approach uses a hash map (frequency table) to store the occurrence of each string and answer queries quickly.

## Time Complexity

O(N + Q)

where:
- N = number of input strings
- Q = number of query strings

Using a frequency map allows each query to be answered efficiently.

## Space Complexity

O(N)

Additional space is used to store the frequency of each unique string.

## Key Concepts Used

- Strings
- Arrays
- Frequency Counting
- Hash Maps
- Searching

## Outcome

The solution efficiently determines the occurrence count of each query string by maintaining a frequency map, reducing unnecessary repeated comparisons and improving performance.