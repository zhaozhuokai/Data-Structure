#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void ReverseString(char* C, int n){
    struct Node* head = NULL;
    struct Node* temp = NULL;
    for(int i = 0; i < n; i++){
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = C[i];
        temp->next = head;
        head = temp;
    }
    struct Node* temp1 = head;
    while(temp1 != NULL){
        printf("%c", temp1->data);
        temp1 = temp1->next;
    }

}