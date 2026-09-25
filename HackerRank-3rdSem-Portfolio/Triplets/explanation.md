# Compare the Triplets

## Problem Statement

Alice and Bob each have ratings in three categories. Compare their ratings category-wise and award one point to the person with the higher rating in each category.

- If Alice's rating is higher, Alice gets 1 point.
- If Bob's rating is higher, Bob gets 1 point.
- If the ratings are equal, no points are awarded.

Return the final scores of Alice and Bob.

## Approach

1. Read the three ratings of Alice and Bob.
2. Compare corresponding ratings one by one.
3. If Alice's rating is greater, increase Alice's score.
4. If Bob's rating is greater, increase Bob's score.
5. Ignore equal values.
6. Print the final scores.

## Time Complexity

O(1)

Only three comparisons are performed, regardless of input size.

## Space Complexity

O(1)

Only a few variables are used to store scores and ratings.

## Key Concepts Used

- Arrays
- Conditional Statements
- Comparison Operations
- Score Tracking

## Outcome

The solution efficiently compares the ratings of Alice and Bob and calculates their final scores using constant time and space.