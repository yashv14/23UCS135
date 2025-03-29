#include <stdio.h>

int binary_search(int array[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,3,5,6,9,14};
    int target = 14;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.", target, result);
    } else {
        printf("Element %d not found.", target);
    }

    return 0;
}
