#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node * next;
};

struct node *head = NULL;

struct node * create(struct node *head){

    struct node * ptr , *newnode;
    
    int data;
    printf("Enter data -1 to exit\n");
    scanf("%d",&data);
    while(data != -1){
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        if(head == NULL){
            head=newnode;
        }
        else
        {
            ptr=head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next=newnode;
            
        }
        printf("Enter data -1 to exit\n");
        scanf("%d",&data);
        
    }
    return head;
}
void print(struct node *head){
    struct node * ptr = head;
    while(ptr){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
struct node *delete_beg(struct node * head){
    int option;
    printf("DO YOU WANT DELETE FIRST ELEMENT\n1 - YES\n0 - NO\n");
    scanf("%d",&option);

    while(option){
        if(head == NULL){
            printf("NO ELEMENTS TO DELETE\n");
            break;
        }
        struct node * temp = head;
        head=head->next;
        free(temp);
        print(head);
        printf("DO YOU WANT DELETE FIRST ELEMENT\n1 - YES\n0 - NO\n");
        scanf("%d",&option);
    }

    return head;
}
int main(){

    head = create(head);
    print(head);
    head = delete_beg(head);
    return 0;
}