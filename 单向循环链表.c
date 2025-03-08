#include <stdio.h>

struct Node{
    int data;
    struct NOde* next;
};

struct Node* head;

struct Node* GetNewNode(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

struct Node* InsertAtTail(struct Node* head, int x){
    struct Node* temp = head;
    struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return head;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void Print(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    head = InsertAtTail(head, 2);
    head = InsertAtTail(head, 4);
    head = InsertAtTail(head, 6);
    head = InsertAtTail(head, 8);
    head = InsertAtTail(head, 10);
    Print(head);
    
}