#include <stdio.h>
#include <string.h>


int binarySearch(char *arr[], int size, const char *target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        int cmp = strcmp(arr[mid], target);
        if (cmp == 0) {
            return mid; 
        } else if (cmp < 0) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    
    char *arr[] = {"apple", "banana", "cherry", "date", "fig", "grape"};
    int size = sizeof(arr) / sizeof(arr[0]);

    char target[50];
    printf("Enter the string to search: ");
    scanf("%s", target);

    
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("String found at index %d.\n", result);
    } else {
        printf("String not found.\n");
    }

    return 0;
}
