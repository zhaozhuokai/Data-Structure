#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100

struct Node{
    int data;
    struct Node* link;
};

struct Node* top = NULL;//top也就是头指针

//根据栈插入、删除的时间复杂度均为O(1)
//入栈:注意不是在尾部入栈，因为尾部入栈需要遍历到尾部，时间复杂度为O(n)，而在头部入栈，时间复杂度为O(1)

void Push(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*)); 
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop(){
    if(top == NULL){
        printf("The stack is empty\n");
        return;
    } 
    struct Node* temp = top;
    top = top->link;
    free(temp);
}

void Top(){
    if(top == NULL){
        printf("The stack is empty\n");
        return;
    }
    printf("%d\n",top->data);
}

void IsEmpty(){
    if(top == NULL){
        printf("The stack is empty\n");
    }else{
        printf("The stack is not empty\n");
    }
}

void Print(){
    struct Node* temp = top;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    Push(2);
    Print();
    Push(3);
    Print();
    Push(4);
    Print();
    Pop();
    Print();
    Push(56);
    Print();
    IsEmpty();
    return 0;

}