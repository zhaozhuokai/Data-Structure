//中缀：{(A*B)+(C*D)-E}
//后缀：AB*CD*+E-   <op1><op2><operator>
//前缀：-+*AB*CDE   <operator><op1><op2>  

#include <stdio.h>
#include <string.h>
#define MaxSize 100
//建立两个栈，一个存储操作数，一个存储操作符
int Oprand[MaxSize];
int Operator[MaxSize];
int top1 = -1;
int top2 = -1;

//判断是否是操作数
int IsOprand(char c){
    if(c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
//判断是否是操作符
int IsOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    else
        return 0;
}   
//判断操作符'+'、'-'、'('、')'、'*'、'/'、'{'、'}'的优先级



//若是操作数，则入栈Oprand
void PushOprand(int x){
    Oprand[++top1] = x;
}
//若是操作符，则入栈Operator
void PushOperator(char x){
    Operator[++top2] = x;
}

//依次读入表达式的字符
void ReadExpression(char* exp){
    int len = strlen(exp);
    for(int i = 0; i < len; i++){
        if(IsOprand(exp[i]))
            PushOprand(exp[i] - '0');
        else if(IsOperator(exp[i]))
        {
            PushOperator(exp[i]);

        }
    }
}


