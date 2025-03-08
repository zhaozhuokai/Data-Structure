#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
int A[MaxSize];
int top = -1;//栈顶指针，-1表示空栈

void Push(int x){
    if(top == MaxSize  - 1){
        printf("The stack is full\n");
        return;
    }
    top++;
    A[top] = x;
}

void Pop(){
    if(top == -1){
        printf("The stack is empty\n");
        return;
    }
    top--;
}

int Top(){
    return A[top];//返回栈顶元素
}

void Print(){
    int i = 0;
    for(i = 0; i <= top; i++){//为什么是<=top，因为top是栈顶指针，指向栈顶元素，所以要打印到栈顶元素
        printf("%d\n",A[i]);
    }
    printf("\n");
}
int main(){
    Push(2);
    Print();
    Push(3);
    Print();
    Push(4);
    Print();
    Pop();
    Print();
    Push(56);
    Print();

}