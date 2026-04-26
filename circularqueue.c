#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10 


int cq[MAXSIZE], rear = -1, front = -1;

int Insert(){
    int n;
    if((rear+1)%MAXSIZE == front)
        printf("circular queue is overflown\n");
    
    
    else{
        printf("Enter an element \n");
        scanf("%d", &n);
    

        if(front == -1 && rear == -1)
        {    rear = 0;
            front = 0;
        }

        else{
            rear = (rear+1)%MAXSIZE;
        }
            
        cq[rear] = n;
        
            
            // if((rear+1)%MAXSIZE == front){
            // printf("circular queue will is overflow\n")
    }
}


int Delete(){
    if(rear == -1 && front == -1){
        printf("queue is empty\n");
    }

    else{

        int n = cq[front];

        if(rear == front){
            rear = -1;
            front = -1;
        }

        else{
            front = (front+1)%MAXSIZE;
        }

        printf("Deleted element is %d\n", n);
    }
}

int Display(){
    int i;
    if(rear == -1 && front == -1){
        printf("Queue is empty");
    }

    for(i=front;i!=rear;i=(i+1)%MAXSIZE){
        printf("%5d", cq[i]);
    }
    printf("%5d\n", cq[i]);
}

void main(){
int choice;
    do{
        printf("Enter your choice\n");
        printf("\n1.insert\n2.delete\n3.display\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                Insert();
                break;

            case 2:
                Delete();
                break;

            case 3:
                Display();
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    }
    while(choice != 4);
}


