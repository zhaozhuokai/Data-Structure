#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node* head;
int main(){
    head = NULL;
    //创建链表
    struct Node *first, *second, *third;
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    first->data = 1;
    second->data = 2;
    third->data = 3;
    first->next = second;
    second->next = third;
    third->next = NULL; 

}