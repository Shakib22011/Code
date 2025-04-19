#include <stdio.h>

int Bsearch(int a[],int key, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high)/2;
    if (a[mid] == key) {
        return mid;
    }
    else if (a[mid] > key) {
        return Bsearch(a,key, low, mid - 1);
    }
    else {
        return Bsearch(a,key, mid + 1, high);
    }
}

int main()
{
    int n,key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter %d integers: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
            printf("%d ",a[i]);
    }
    printf("\nEnter the key element: ");
    scanf("%d",&key);
    int result = Bsearch(a,key, 0, n - 1);


    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

