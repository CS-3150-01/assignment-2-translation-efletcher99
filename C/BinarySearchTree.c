#include <stdio.h>
#include <stdlib.h>

struct Node{
    int key;
    struct Node *right;
    struct Node *left;
};

struct Node* newNode(int data){

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp; 
}

int factorial(int num){
    int fact = 1;
    if(num == 0){
        return 1;
    }
    else {
        while(num > 1){
            fact = fact * num;
            num--;
        }
    }
    return fact;
}

int numOfBST(int key) {    
        int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));    
        return catalanNumber;    
} 

int main(){
    struct Node* root = NULL;
    int num = factorial(6);
    printf("The factorial of %d is: %d\n", 6, num);
    printf("Total number of possible Binary Search Trees with given key: %d",  numOfBST(5));
    return 0;  
}