#include <stdio.h>

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int num[] = {3, 5, 1, 8, 9, 2, 7};
    int size = sizeof(num) / sizeof(num[0]);

    int min = find_min(num, size);
    int max = find_max(num, size);

    printf("Minimum Number is : %d\n", min);
    printf("Maximum Number is : %d\n", max);

    return 0;
}
