#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void Insert(int data, int n)//data为插入的数据，n为目标插入位置
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1->data = data;
    temp1->next = NULL;

    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }

    struct Node* temp2 = head;//需要另一个指针来找到第n-1个节点，因为head是全局变量，不能改变
    for(int i = 0; i < n-2; i++){//从第一个节点开始，找到第n-1个节点
        temp2 = temp2->next;//temp2指向第n-1个节点
    }
    temp1->next = temp2->next;
    temp2->next = temp1;//用temp2闭合链表

}

void Print()
{
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{
    head = NULL;//链表为空
    Insert(2,1);//List: 2
    Insert(3,2);//List: 2,3
    Insert(4,1);//List: 4,2,3
    Insert(5,2);//List: 4,5,2,3
    Print();
}