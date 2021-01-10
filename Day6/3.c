#include<stdio.h>
int stack[100], minStack[100], minTop = 0, top =-1, size;

void push(int x){
    if(top == size - 1){
        printf("OVERFLOW\n");
        return;
    }
    stack[++top];
    if(minStack[minTop] > x){
        minStack[++minTop] = x;
    } 
    else{
        int i = minTop;
        minStack[++minTop] = minStack[i];
    }
}
void pop(){
    if(top == -1){
        printf("UNDERFLOW\n");
        return;
    }
    top = top - 1;
    minTop = minTop -1;
}
int minEleme(){
    return minStack[minTop];
}

int main(){
    printf("Enter size of STACK\n");
    scanf("%d",&size);
    int x;
    minStack[0] = 999;
    for (int i = 0; i < size; i++)
    {
       printf("Enter data to STACK\n");
       scanf("%d",&x);
       push(x);
    }
    printf("min elemnt %d\n",minEleme());
    pop();
    printf("min elemnt %d\n",minEleme());
    return 0;

    
}