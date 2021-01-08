#include<stdio.h>


int ternary_search(int arr[] , int beg , int end , int x){
    while (beg <= end)
    {
        int mid1 = beg + (end - beg) / 3;
        int mid2 = end - (end - beg) / 3;
        
        if(arr[mid1] == x)
            return mid1;
        else if(arr[mid2] == x)
            return mid2;
        else if(arr[mid1] > x)
            end = mid1 - 1;
        else if(arr[mid1] < x && arr[mid2] > x){
            beg = mid1 + 1;
            end = mid2 - 1;
        }
        else
            beg = mid2+1;
        
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
    int found = ternary_search(arr , 0 , n-1 , x);
    if(found == -1)
        printf("VALUE IS NOT IN ARRAY\n");
    else
        printf("VALUE FOUND AT POSITION %d\n", (found+1));
    return 0;   
    
}