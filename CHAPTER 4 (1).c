#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time()

// Global array
int a[5];

// Function to initialize the array with random numbers
void initialize_array() {
    // Seed the random number generator
    srand((unsigned int)time(0));
    for (int i = 0; i < 5; i++) {
        a[i] = rand() % 100;  // Assign random values between 0 and 99
    }
}

// Bubble sort function
void bubble_sort() {
    int temp;
    int swapped;

    for (int i = 0; i < 5 - 1; i++) {
        swapped = 0;
        for (int j = 0; j < 5 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no elements were swapped, the array is sorted
        if (!swapped) break;
    }
}

int main() {
    // Initialize the array with random values
    initialize_array();

    // Display the unsorted array
    printf("Unsorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Sort the array
    bubble_sort();

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
