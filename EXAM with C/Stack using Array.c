#include<stdio.h>
#include<stdlib.h>
#define stack 10

int top = -1,ch=0,n;

void push(){
    int value;
    if(top == n){
        printf("Stack is overflow ");
    }
    else{
        printf("Enter the value : ");
        scanf("%d",&value);
        top +=1;
        stack[top] = value;
    }
}

void pop(){
    if(top == -1){
        printf("Stack is underflow ..");
    }
    else{
        top -= 1;

    }
}

void show(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=0;i<top;i++){
            printf(" %d \n",stack[i]);
        }
    }
}

int main(){
    printf("Enter the number of elements in the stack ");
    while(ch != 4){
        printf("Chose one from the below : ");
        printf("\n1.PUSH\n2.POP\n3.Show\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
        }
    }
}