//insertion sort
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev-1;
        }
        arr[prev+1] = current;
    }
    printf("The sorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
