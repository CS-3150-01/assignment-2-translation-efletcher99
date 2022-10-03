#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* two = NULL;
struct Node* three = NULL;
struct Node* tail = NULL;

void display(struct Node* n){   
            
        if(n == NULL) {    
            printf("List is empty");    
            return;    
        }    
        printf("Nodes of singly linked list: ");    
        while(n != NULL) {    
            
            printf(" %d ", n->data);    
            n = n->next;    
        }      
    }  


int main() {
    head = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = tail;

    tail->data = 0;
    tail->next = NULL;

    display(head);

    return 0;

}