#include <stdio.h>
#include <stdbool.h>


void CreateQueue(){
    int front = -1;
    int rear = -1;
}
bool IsEmpty(int A[]){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}
bool IsFull(int A[]){
    if(rear = (sizeof(A)/sizeof(int)) - 1){
        return true;
    }
    else{
        return false;
    }
}
void EnQueue(int A[], int x){
    if(IsFull(A)){
        pf("Queue is full\n");
    }
    else if(IsEmpty(A)){
        front = rear = 0;
        A[rear] = x;
    }
    else{
        rear++;
        A[rear] = x;
    }
}
void DeQueue(){
    if(IsEmpty(A)){
        printf("Queue is empty\n");
        return;
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
}
int GetHead(int A[]){
    if(IsEmpty(A)){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        return A[front];
    }
}

void PrintQueue(int A[]){
    
}

