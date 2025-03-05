#include <stdio.h>
#include <string.h>
void print( const char *C)//加上const，表示C指向的内容不能修改
{
while(*C != '\0'){
        printf("%c", *C);
        C++;
    }
    printf("\n");
}
int main(){
    //指针和字符数组 
    char str[] = "Hello";
    printf("Size of str = %d\n", sizeof(str)); //输出6，包括空字符
    printf("Length of str = %d\n", strlen(str)); //输出5，不包括空字符
    char *c = str;
    printf("%c\n", *c); //输出H
    printf("%c\n", *(c + 1)); //输出e
    for(int i = 0; i < strlen(str); i++){
        printf("%c", *(c + i));
    }//输出Hello


    
//***字符串常量
//***易错点
char *C = "Hello";
//C[0] = 'A'; //错误，C是一个常量指针，不能修改
print(C); //输出Hello
}
