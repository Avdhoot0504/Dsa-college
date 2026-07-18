#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int temp[n];

    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Iterative Merge Sort
    for(int size = 1; size < n; size = size * 2) {

        for(int left = 0; left < n - 1; left += 2 * size) {

            int mid = left + size - 1;
            int right = left + 2 * size - 1;

            if(mid >= n)
                continue;

            if(right >= n)
                right = n - 1;

            int i = left;
            int j = mid + 1;
            int k = left;

            while(i <= mid && j <= right) {
                if(arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                }
                else {
                    temp[k++] = arr[j++];
                }
            }

            while(i <= mid) {
                temp[k++] = arr[i++];
            }

            while(j <= right) {
                temp[k++] = arr[j++];
            }

            for(i = left; i <= right; i++) {
                arr[i] = temp[i];
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}