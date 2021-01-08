#include<stdio.h>


int binary_search(int arr[] , int beg , int end , int x){
    while (beg < end)
    {
        int mid = beg + (end - beg) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x)
            end = mid-1;
        else
            beg = mid+1;
    }
    return -1;
    
}

int main(){
    int arr [] = {2 , 3 , 4 , 10 , 15 , 16 , 17};
    int n = 7, i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
    int x;
    printf("Enter value\n");
    scanf("%d", &x);
    int found = binary_search(arr , 0 , n-1 , x);
    if(found == -1)
        printf("VALUE IS NOT IN ARRAY\n");
    else
        printf("VALUE FOUND AT POSITION %d\n", (found+1));
    return 0;   
    
}