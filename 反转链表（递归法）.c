#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Reverse(struct Node* p){

    if(p->next == NULL){//递归停止条件：p为最后一个节点
        head = p;//将最后一个节点赋值给head
        return; 
    }
    Reverse(p->next);//没有到达最后一个节点，则递归到最后一个节点
    

    //递归返回时，p指向倒数第二个节点，p->next指向最后一个节点（指向NULL）
    //为什么递归返回时，p指向倒数第二个节点？因为递归返回时，p->next指向最后一个节点，所以p指向倒数第二个节点
    struct Node* q = p->next;//q指向最后一个节点
    q->next = p;//将最后一个节点指向倒数第二个节点
    p->next = NULL;//将倒数第二个节点指向NULL
}