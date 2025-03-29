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
    int sorted_list[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 14;
    int size = sizeof(sorted_list) / sizeof(sorted_list[0]);

    int result = binary_search(sorted_list, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found.\n", target);
    }

    return 0;
}
