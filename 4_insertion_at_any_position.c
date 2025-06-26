#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next; 
};

void display(struct Node *head){
    struct Node *temp = head;
    while (temp!=0)
    {
        printf("%d ", temp->data);
        temp = temp->next;    
    } 
}

// void insertion_at_head(struct Node *head){
//     struct Node *temp = head,;
//     newNode = (struct Node*)malloc(sizeof(struct Node));
//     while (temp!=0)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;    
//     } 
// }

int main(){
    struct Node *head,*newNode,*tail;
    head = 0;
    int choice = 1;
    while (choice)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data : ");
        scanf("%d", &(newNode->data));
        newNode->next=0;
        if(head == 0){
            head = newNode;
            tail = newNode;
        }else if(choice == 2){
            struct Node *temp = newNode;
            temp->next = head;
            head = temp;
        } else if(choice==3){
            int position;
            printf("Enter the position 0 base indexing: ");
            scanf("%d",&position);
            if(position==0){
                struct Node *temp = newNode;
                temp->next = head;
                head = temp;
            } else{
                struct Node *temp = head;
                int count = 0;
                while (count!=position-1)
                {
                    if(temp->next == 0 ){
                    printf("Invalid position!!! you value is added in the end. \n");
                    break;
                } else{
                    temp = temp->next;
                    count++;
                }
                };
                 
                newNode->next = temp->next;
                temp->next = newNode;    
                
            }
        }else {
            tail->next = newNode;
            tail = newNode;
        }
        
        printf("Current list is: ");
        display(head);
        printf("\n");
        printf("Press 1: insert data at tail \n");
        printf("Press 2 : Insertion at beginning  \n");
        printf("Press 3 : Insertion at any position  \n");
        printf("Press 0 : Exit  \n");
        scanf("%d",&choice);
    }
}

