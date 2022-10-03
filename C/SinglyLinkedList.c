#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
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

void addNode(int data) {       
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));    
               
    if(head == NULL) {    
           
        head = newNode;    
        tail = newNode;    
    }    
    else {    
        newNode->data = data;   
        tail->next = newNode;  
   
        tail = newNode;    
    }  
}

int main() {
    
    addNode(0);
    addNode(2);
    addNode(3);

    display(head);

    return 0;

}