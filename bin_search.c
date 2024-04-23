#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key greater, ignore left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore right half
        if (arr[mid] > key) {
            right = mid - 1;
        }
    }

    // If key not found
    return -1;
}

int main(void) {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 60;

    // Perform binary search
    int index = binarySearch(arr, 0, size - 1, key);

    // Check if key was found
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
