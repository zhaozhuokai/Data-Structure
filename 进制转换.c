#include <stdio.h>
#include <stdlib.h>
#define MaxSize 20

//建立空栈
int top = -1;
int A[MaxSize];

int Push(int x){
    if(top == MaxSize - 1){
        printf("The stack is full\n");
        return 0;
    }
    else{
        top++;
        A[top] = x;
        return 1;
    }
}

int Pop(){
    if(top == -1){
        printf("The stack is empty\n");
        return 0;
    }
    else{
        top--;
        return 1;
    }
}

int Top(){
    if(top == -1){
        printf("The stack is empty\n");
        return 0;
    }
    else{
        return A[top];
    }
}

void Transfer(int n, int d){//n为十进制数，d为要转换的进制
    while(n > 0){
        Push(n % d);
        n = n / d;
    }
    while(top != -1){
        printf("%d", A[top]);
        Pop();
    }
}

int main(){
    int n = 1348;
    int d = 8;
    Transfer(n, d);
    printf("\n");
    return 0;
}
    