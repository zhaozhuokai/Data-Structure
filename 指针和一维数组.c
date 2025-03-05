//数组首元素的地址就是数组的地址，数组名就是数组的地址
//数组名是一个常量指针，指向数组首元素的地址
#include <stdio.h>
#include <string.h>

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A; //p指向数组首元素的地址
    printf("%d\n", A); //输出数组的地址
    printf("%d\n", &A[0]); //输出数组首元素的地址
    printf("%d\n", A[0]);//输出数组首元素的值
    printf("%d\n", *A); //输出数组首元素的值
    printf("%d\n", *p); //输出数组首元素的值
    printf("%d\n", *(p + 1)); //输出数组第二个元素的值

    
}