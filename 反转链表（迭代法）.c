 #include <stdio.h>
 #include <stdlib.h>

 struct Node {
     int data;
        struct Node *next;
 };

struct Node* Reverse(struct Node* head){
    struct Node *prev, *current, *next;
    prev = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
 }