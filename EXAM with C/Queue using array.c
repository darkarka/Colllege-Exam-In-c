#include<stdio.h>

#define max 100

void insert(){
    int item;
    if(rear == max -1){
        printf("Queue is Overflow\n");
    }
    else{
        if(front == -1){
            front = 0;
            printf("Insert the element in queue : ");
            scanf("%d",&item);
            rear = rear + 1;
            arr[rear] = item;
        }
    }
}

void delete(){
    if(front == -1 || front > rear){
        printf("Queue is underflow");
        return;
    }
    else{
        printf("Element deleted from queue : %d\n",arr[front]);
        front = front +1;
    }
}

void display(){
    if(front == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is : \n");
        for(int i=front; i<= rear;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
}

int arr[max];

int rear = -1;
int front = -1;

int main(){
    int ch;
    while(1){
                printf("1.Insert element to queue \n");

        printf("2.Delete element from queue \n");

        printf("3.Display all elements of queue \n");

        printf("4.Quit \n");

        printf("Enter your choice : ");

        scanf("%d", &ch);

        switch (ch)

        {

            case 1:

            insert();

            break;

            case 2:

            delete();

            break;

            case 3:

            display();

            break;

            case 4:

            exit(1);

            default:

            printf("Wrong choice \n");

        } 
    }
}