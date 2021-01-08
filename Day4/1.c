#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
};

struct node * head = NULL;
int countElem(struct node *head){
    struct node * ptr = head;
    int count = 0;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
        count++;
    }
    printf("\n");
    return count;
}
struct node * insert_begin(struct node * head, struct node * newnode  ){
    
    if(head == NULL){
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    
    return head;
}
struct node *insert_end(struct node * head, struct node * newnode){
    struct node * ptr = head;
    while (ptr->next != NULL)
    {
       ptr = ptr->next;
    }
    ptr->next = newnode;
    return head;
    
}
struct node *insert_any(struct node * head, int data , int pos, int noofelements){

    
    struct node *ptr = head , *prev = head;
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    
    newnode->data = data;
    printf("%d ", newnode->data);
    newnode->next = NULL;
    int count = 0;
    if(pos == 1){
        head = insert_begin(head,newnode);
    }
    else if(noofelements == pos-1){
        head = insert_end(head,newnode);
    }
    else
    {
       while(ptr->next != NULL){
            if(count == pos-1){
                break;
            }
            prev = ptr;
            ptr = ptr->next;
            count++;
        }
        newnode->next = ptr;
        prev->next = newnode;
    }
    
    return head;

}

int main(void) {
    int noofelements ;
    int data , pos;
    int stop = 1;
    
    while(stop){
        noofelements = countElem(head);
        if(noofelements == 0){
            printf("List is empty \n");
            printf("Enter data\n ");
            scanf("%d",&data);
            pos=1;
        }
        else{
            printf("Enter data & position to insert\n ");
            scanf("%d%d",&data , &pos);
        }
        
        head = insert_any(head,data,pos,noofelements);
        printf("AFTER INSERTING AT POS %d\n",pos);
        countElem(head);
        printf("PRESS \n1 TO CONTINUE\n0 TO STOP\n");
        scanf("%d",&stop);
    }
    return 0;
}
