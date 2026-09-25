#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    // Allocate memory for tracking book counts per shelf
    total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
    
    // Allocate memory for row pointers (one per shelf)
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL;
    }
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process query of type 1: Insert book with y pages on shelf x
             */
            int x, y;
            scanf("%d %d", &x, &y);

            // Increment count of books on shelf x
            total_number_of_books[x]++;
            
            // Reallocate memory for shelf x to accommodate the new book
            total_number_of_pages[x] = (int*)realloc(
                total_number_of_pages[x], 
                total_number_of_books[x] * sizeof(int)
            );
            
            // Store the page count for the new book at the end of shelf x
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}