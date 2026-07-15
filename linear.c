#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter element to search:");
    scanf("%d", &key);
    int found = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Element not found\n");
    }
    return 0;
}