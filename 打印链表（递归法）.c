#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void Print(struct Node* p){
    if(p==NULL){
        return;
    }
    printf("%d ",p->data);
    Print(p->next);
}