#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10




int queue[MAXSIZE];
int rear = -1, front = 0;




int insert(){
    int n;
    if(rear == MAXSIZE -1){
        printf("queue will overflow");
    }
    
    else{
        printf("Enter the value to insert\n");
        scanf("%d", &n);
        rear++;  
        queue[rear] = n;
    }
}


int delete(){
    int n;
    if(front>rear){
        printf("queue is empty");
    }

    else{
        n = queue[front];
        printf("Deleted element is :- %d", n);
        front++;
    }
}


int display(){
    if(front>rear){
        printf("queue is empty");
    }
    
    else{
        int i;
        printf("Queue Elements are:-\n");
        for(i = rear; i>=front; i--){
            printf("%d\t", queue[i]);
        }
    }
}


void main(){
    
    int choice;
    do{
        printf("\n-----queue-------");
        printf("\n1.insert\n2.delete\n3.display");
        printf("\n-----------------");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        switch(choice)
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
                
            // default:
            //     printf("Invalid choice");
            //     break;
        }
    }
    while(choice != 4);
}
