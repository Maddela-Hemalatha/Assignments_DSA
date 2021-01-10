#include<stdio.h>

int main(){

    int size;
    printf("Enter input size\n");
    scanf("%d ", &size);
    long long inp[size],p=1,c=0;
    for (int i = 0; i < size; i++)
        scanf("%lld",&inp[i]);
    for (int i = 0; i < size; i++)
    {
        long x = inp[i];
        while (x%10 == 0)
        {
            c++;
            x=x/10;
        }
        p *= x;
        
    }
    printf("%lld",p);
    for (int i = 0; i < c; i++)
    {
        printf("0");
    }
    printf("\n");
    return 0;
}