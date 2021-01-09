#include <stdio.h>
void insertionSort(int arr[] , int n){
    int i , key ,j;
    for(i=1;i<n;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>=key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printEle(int arr[] , int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {3, 5, 7, 2, 8, 9, 4};
    int n=7,i;
    printf("BEFORE SOTRING \n");
    printEle(arr,n);
    insertionSort(arr,n);
    printf("AFTER SORTING\n");
    printEle(arr,n);
    return 0;
}