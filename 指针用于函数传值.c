//由于函数中变量是局部变量(存储在栈中)，当函数调用结束后，变量就会被销毁，在函数中修改变量的值，不会影响到主函数中变量的值
//所以在函数中修改变量的值，需要使用指针传递的方式

#include <stdio.h>

void change(int *p) {
    *p = (*p) + 1;
}
int main() {
    int a = 10;
    change(&a);
    printf("%d\n", a);
    return 0;
}