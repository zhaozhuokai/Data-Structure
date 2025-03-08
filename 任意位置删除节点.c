#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head;

void Delete(int n){
    struct Node* temp1 = head;
    if(n == 1){
        head = temp1->next;
        free(temp1);
        return;
    }
    for(int i = 0; i < n-2; i++){
        temp1 = temp1->next;
    }
    struct Node* temp2 = temp1->next;//temp2指向要删除的节点
    temp1->next = temp2->next;
    free(temp2);
}
