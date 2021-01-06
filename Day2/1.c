#include<stdio.h>
int main(){
    int rows,i,j;
    printf("Enter no of rows\n");
    scanf("%d",&rows);
    int count = 1;
    for(i=0;i<rows;i++){
        if(i == 0){
            printf("%d\n" , count);
            count++;
        }
        else{
            for(j=0;j<=2*i;j++){
                if(j%2 == 0){
                    printf("%d ", count);
                }
                else{
                    printf("* ");
                }
            }
            count++;
            printf("\n");
        }
    }

    return 0;
}