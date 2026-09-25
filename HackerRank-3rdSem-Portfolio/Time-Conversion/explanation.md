# Time Conversion

## Problem Statement

Given a time in 12-hour AM/PM format, convert it into 24-hour (military) time format.

Examples:

- 07:05:45PM → 19:05:45
- 12:01:00AM → 00:01:00
- 12:01:00PM → 12:01:00

## Approach

1. Read the input time string.
2. Extract the AM/PM part.
3. If the time is PM and the hour is not 12, add 12 to the hour.
4. If the time is AM and the hour is 12, change the hour to 00.
5. Keep the minutes and seconds unchanged.
6. Print the converted 24-hour format time.

## Time Complexity

O(1)

The input string has a fixed length, so the operations take constant time.

## Space Complexity

O(1)

Only a few variables are used for processing.

## Key Concepts Used

- Strings
- Conditional Statements
- Time Format Conversion
- Character Manipulation

## Outcome

The solution efficiently converts time from 12-hour AM/PM format to 24-hour format using simple string processing and constant extra space.