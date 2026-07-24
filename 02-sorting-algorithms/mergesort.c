#include <stdio.h>

void merge(int arr[],int low,int mid,int high){
    int temp[high-low+1];
    int left=low;
    int right=mid+1;
    int k=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
           temp[k]=arr[left];
           k++;
           left++;
        }
        else{
            temp[k]=arr[right];
            k++;
            right++;
        }
    }
    while(left<=mid){
        temp[k]=arr[left];
        k++;
        left++;
    }
    while(right<=high){
        temp[k]=arr[right];
        k++;
        right++;
    }

    
    for(int i = 0; i < k; i++) {
    arr[low + i] = temp[i];
}

}
void ms(int arr[],int low,int high){
   if(low>=high){
    return ;
   }
   int mid=(low+high)/2;
   ms(arr,low,mid);
   ms(arr,mid+1,high);
   merge(arr,low,mid,high);

}
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
   

    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int low=0;
    int high=n-1;
    ms(arr,low,high);
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
    }

}