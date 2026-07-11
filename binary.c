#include<stdio.h>
int main(){
    //binary search
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int a = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element to be searched:");
    int target;
    scanf("%d",&target);
    int low = 0;
    int high = a - 1;
    int mid;

    while(low <= high){
        mid = (low + high)/2;
        printf("current search range:");
        for(int i=low;i<=high;i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
        printf("mid index:%d\n", mid);
        if(arr[mid] == target){
            printf("Element found at index %d\n", mid);
            break;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(low > high){
        printf("Element not found\n");
    }

    return 0;
}