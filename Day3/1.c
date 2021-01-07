#include <stdio.h>

int deleteEle(int arr [] , int n, int pos){
    if(pos==n)
        return n-1;
    else{
        int i;
        for(i=pos-1;i<n;i++){
            arr[i] = arr[i+1];
        }
        return n-1;
    }
}
int main(void) {
    int arr [] = {1,2,3,4};
    int n = 4;
    int pos;
    printf("Enter no of position\n");
    scanf("%d" , &pos);
    n=deleteEle(arr,n,pos);
    int i=0;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
