#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

//创建一个新节点
struct Node* GetNewNode(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

//插入节点到链表头
void InsertAtHead(int x){
    struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

//打印链表
void Print(){
    struct Node* temp = head;
    printf("Forward: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//逆序打印链表
void ReversePrint(){
    struct Node* temp = head;
    if(temp == NULL) return; //空链表直接返回
    while(temp->next != NULL){
        temp = temp->next;
    }
    printf("Reverse: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main(){
    
    head = NULL;
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();

    return 0;
}