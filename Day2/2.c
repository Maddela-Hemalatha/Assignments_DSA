#include<stdio.h>
int main(){
    int rows,i,j;
    printf("Enter no of rows\n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<=i;j++){
            if(i==j || (i%2 == 0 && j%2 == 0))
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}