#include<stdio.h>
void merge(int a[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int b[l + 1]; // Temporary array to store sorted elements

    // Merge two sorted subarrays
    while (i <= mid && j <= h) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of the left subarray (if any)
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= h) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (k = l; k <= h; k++) {
        a[k] = b[k];
    }
}

void merge_sort(int a[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;

        // Recursively sort the left and right subarrays
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, h);

        // Merge the sorted subarrays
        merge(a, l, mid, h);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }

    merge_sort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}
