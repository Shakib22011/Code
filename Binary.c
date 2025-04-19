#include <stdio.h>

int main() {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    //int size = n;
    printf("Enter n numbers : ");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    int key;
    printf("Enter the key : ");
    scanf("%d",&key);

    int l = 0, h = n - 1, mid;

    while (l < h) {
        mid = (l + h) / 2;
        printf("%d\n",mid);
        if (a[mid] < key) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }

    mid = h;
    printf("%d\n",mid);

    if (a[mid] == key) {
        printf("Element found at index %d\n", mid);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
