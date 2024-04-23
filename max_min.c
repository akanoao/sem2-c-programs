#include <stdio.h>

// Function to find maximum element
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element as maximum
    
    // Iterate through the array to find the maximum element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    
    return max; // Return the maximum element
}

// Function to find minimum element
int findMin(int arr[], int size) {
    int min = arr[0]; // Assume the first element as minimum
    
    // Iterate through the array to find the minimum element
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    
    return min; // Return the minimum element
}

int main(void) {
    int arr[] = {10, 20, 5, 30, 15,90,-1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Find maximum and minimum elements
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}
