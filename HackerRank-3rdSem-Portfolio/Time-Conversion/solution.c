#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

char* timeConversion(char* s) {
    int hh, mm, ss;
    char period[3];

    // Allocate dynamic memory for the 8-character string + null terminator ("HH:MM:SS\0")
    char* result = (char*)malloc(9 * sizeof(char));

    // Read hours, minutes, seconds, and period (AM/PM) from s
    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, period);

    // Convert hour value according to 24-hour format logic
    if (strcmp(period, "PM") == 0) {
        if (hh != 12) {
            hh += 12;
        }
    } else { // "AM"
        if (hh == 12) {
            hh = 0;
        }
    }

    // Format output as HH:MM:SS with 2-digit padding
    sprintf(result, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}