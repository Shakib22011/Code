#include <stdio.h>
int Max(int arr[], int low, int high) {
    int Left, Right;
    if (low == high) {
        return arr[low];
    }
    int mid = (low + high) / 2;
    Left = Max(arr, low, mid);
    Right = Max(arr, mid + 1, high);

    // compare large
    if (Left > Right) {
        return Left;
    } else {
        return Right;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = Max(arr, 0, n - 1);
    printf("Maximum value: %d\n", max);

    return 0;
}

