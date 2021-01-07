#include<stdio.h>
void reversal(int arr[] , int low , int high){
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    
}

int leftRotate(int arr[] , int n , int k){
    reversal(arr,0,k-1);
    reversal(arr,k,n-1);
    reversal(arr,0,n-1);
}
int main(){
    int arr [] ={1,2,3,4,5,6,7};
    int n=7;
    int k;
    printf("Enter no of positions\n");
    scanf("%d" , &k);
    leftRotate(arr,n,k);
    int i;
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);


    return 0;
}