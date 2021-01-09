#include<stdio.h>

int stack[100], top = -1 , size;

void push(int x){
    if(top == size-1)
    {
        printf("OVERFLOW\n");
        return;
    }
    stack[++top] = x;
}
int minElem(){
    int minn = stack[0];
    for(int i=1;i<=top;i++){
        if(minn > stack[i])
            minn = stack[i];
    }
    return minn;
}
int main(){

    printf("NO OF VALUES NEED\n");
    scanf("%d", &size);
    int x;
    for (int i = 0; i < size; i++)
    {
        printf("Enter value at position %d :\t",(i+1));
        scanf("%d", &x);
        push(x);
    }

    printf("Minimum elemnt %d\n",minElem());

    return 0;

    
}