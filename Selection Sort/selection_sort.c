#include <stdio.h>

#define LENGTH 10

void selection_sort(int array[], char s_order);
void swap(int *first, int *second);
void display_array(int array[]);

int main() {
    int my_array[LENGTH] = {12, 36, 27, 8, 77, 43, 22, 58, 60, 85};
    char sort_order;

    // Prompt the user to select the sorting order
    printf("Enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &sort_order);

    // Sort the array
    selection_sort(my_array, sort_order);

    // Display the sorted array
    printf("Sorted array: ");
    display_array(my_array);

    return 0;
}

void selection_sort(int array[], char s_order) {
    int i, j;
    int min_max_index;

    for (i = 0; i < LENGTH - 1; i++) {
        min_max_index = i;
        for (j = i + 1; j < LENGTH; j++) {
            // For ascending order, find the index of the smallest element
            // For descending order, find the index of the largest element
            if ((s_order == 'a' && array[j] < array[min_max_index]) ||
                (s_order == 'd' && array[j] > array[min_max_index])) {
                min_max_index = j;
            }
        }
        // Swap the minimum/maximum element with the leftmost element of unsorted array
        swap(&array[i], &array[min_max_index]);
    }
}

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void display_array(int array[]) {
    int i;
    for (i = 0; i < LENGTH; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}