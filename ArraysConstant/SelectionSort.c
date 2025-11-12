#include <stdio.h>

int main() {
    // Initialize the array
    int my_array[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    
    for (int i = 0; i < n - 1; i++) {
  
        int min_index = i;

        // Inner loop: search the *remaining* unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            // If a smaller element is found, update min_index
            if (my_array[j] < my_array[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the element at the current position 'i'
        // This process places the minimum element into the sorted part of the array
        int temp = my_array[min_index];
        my_array[min_index] = my_array[i];
        my_array[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}

