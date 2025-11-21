

#include <stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE]; 
int top = -1; 

void push(){
    int n;
    if(top == MAXSIZE - 1){
        printf("\n Stack is overflow");
    }
    else{
        printf("Enter an element:\n");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}

void pop(){
    int n;
    if(top==-1){
        printf("Stack is empty");
    }
    
    else{
        n = stack[top];
        top--;
        printf("Poped element %d", n);
    }
}

void display(){
    int i
    
    if(top == -1){
        printf("Stack is Empty");
    }
    
    else{
        printf("Elements of stack");
        for(i=top;i>=0;i--){
            printf("\n%d", stack[i]);
        }
    }
}


void main(){
    int choice;
    do{
        printf("______Stack_______");
        printf("\n1.push\n2.pop\n3.display\n4.Exit");
        printf("\n________________");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            default:printf("Invalid choice");
        }
    }while(choice != 4);
}
