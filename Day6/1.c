#include<stdio.h>
int cirQueue[100] ;
int  front = -1 , rear = -1 , size;
void enqueue(int x){
    if((front == 0 && rear == size-1) || (front == (rear+1)%size)){
        printf("OVERFLOW\n");
        return;
    }
    else if(front == -1){
        front = rear = 0;
        cirQueue[rear] = x;
    }
    else if(rear == size -2 && front != 0){
        rear = 0;
        cirQueue[rear] = x;
    }
    else{
        rear++;
        cirQueue[rear] = x;
    }
}

void dequeue(){
    if(front == -1){
        printf("UNDERFLOW\n");
        return;
    }
    printf("%d is deleted\n",cirQueue[front]);
    if(front == rear){
        front = rear = -1;
    }
    else if(front == size-1)
        front = 0;
    else 
        front++;
}
void display(){
    int i;
    for (int i = front; i <rear ; i++)
        printf("%d\t",cirQueue[i]);

    printf("\n");
    
}

int main(){

    printf("Enter size of QUEUE\n");
    scanf("%d",&size);
    int x;
    for (int i = 0; i < size; i++)
    {
        printf("Enter data to QUEUE\n");
        scanf("%d",&x);
        enqueue(x);
    }
    display();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
    
}