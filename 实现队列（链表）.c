#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL)//如果队列为空
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void Dequeue()//出队：删除队头元素
{
    struct Node* temp = front;
    //如果队列为空
    if(front == NULL) 
    {
        printf("Empty\n");
        return;
    }
    //如果队列中只有一个元素
    if(front == rear){
        front = rear = NULL;
    }
    //如果队列中有多个元素
    else{
        
        front = front->next;
        
    }
    free(temp);
    
}

int Front()//返回队头元素
{
    if(front == NULL)
    {
        printf("Empty\n");
        return -1;
    }
    return front->data;
}

bool IsEmpty()//判断队列是否为空
{
    return front == NULL;//如果队头为空，队列为空
}

void Print()//打印队列
{
    struct Node* temp = front;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main(){
    Enqueue(2); Print();
    Enqueue(4); Print();
    Enqueue(6); Print();
    Dequeue(); Print();
    Enqueue(8); Print();
    printf("%d\n", Front());
    return 0;
}