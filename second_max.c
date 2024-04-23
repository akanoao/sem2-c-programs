#include <stdio.h>

// Function to find the second largest element
int findSecondLargest(int arr[], int size) {
    int firstMax = arr[0]; // Initialize the first maximum
    int secondMax = arr[0]; // Initialize the second maximum
    
    // Traverse through the array to find the second maximum element
    for (int i = 1; i < size; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax; // Update the second maximum
            firstMax = arr[i]; // Update the first maximum
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i]; // Update the second maximum
        }
    }
    
    return secondMax; // Return the second maximum element
}

int main(void) {
    int arr[] = {10, 20, 5, 30, 15,40};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Find the second largest element
    int secondLargest = findSecondLargest(arr, size);
    
    printf("Second largest element: %d\n", secondLargest);
    
    return 0;
}
