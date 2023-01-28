#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    
}*top;

// Inititialize an empty stack 

void Initialize(){
    top = NULL;
}

// Check if stack is empty or not:

int isEmpty(){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

// Count stack element :

int getstacksize(struct node *head){
    // Input validation 
    if(head == NULL){
        printf("Error : Invalid stack pointer !!!\n");
        return;
    }

    int length = 0;
    while(head != NULL){
        head = head->next;
        length++;
    }
    return length;
}

// Push function to push element in the stack 

void push(int num){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data= num;

    if(top == NULL){
        top = temp;
        top->next = NULL;
    }
    else{
        temp->next = top;
        top = temp;
    }
    
}

void pop(){
    
}