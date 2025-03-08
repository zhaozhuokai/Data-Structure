//{[(a+c)+b]+d}*((e+f)+g)
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Match(char a, char b){
    if(a == '{' && b == '}')
        return true;
    if(a == '[' && b == ']')
        return true;
    if(a == '(' && b == ')')
        return true;
    return false;
}

bool CheckBalancedParentheses(char* exp){
    //计算字符串exp中括号的个数
    int len = strlen(exp);
    //创建一个栈
    char S[99];
    //遍历字符串exp
    int top = -1;
    for(int i = 0; i<len; i++){
    //如果遇到左‘{’、‘[’、‘(’则入栈
        if(exp[i] == '{' || exp[i] == '[' || exp[i] == '('  )
            S[++top] = exp[i];
    //否则遇到右‘}’、‘]’、‘)’则出栈
        else if(exp[i] == '}' || exp[i] == ']' || exp[i] == ')' )
        {
            //如果栈为空或不匹配，则返回false
            if(top == -1 || !Match(S[top], exp[i]))
                return false;
            //匹配则出栈
            else
                top--;
        }
        else
            continue;
    }   
    return top == -1 ? true : false;//如果栈为空则返回true，否则返回false  
}     
        
    
int main(){
    char exp[] = "{[(a+c)+b]+d}*((e+f)+g)";
    if(CheckBalancedParentheses(exp))
        printf("True\n");
    else
        printf("False\n");
}
