#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    // 为什么要用动态内存分配？
    // 因为静态内存分配的数组大小在编译时就要确定，而动态内存分配的数组大小在运行时才确定
    //不能写成int a[n];因为n是变量，而数组的大小必须是常量
    int *A = (int*)malloc(n*sizeof(int));
    /*for(int i = 0; i < n; i++){
        A[i] = i+1;
    }*/
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }

    //calloc函数会初始化分配的内存空间，而malloc不会
    //calloc函数的两个参数分别是元素的个数和每个元素的大小
    int *B = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++){
        printf("%d ", B[i]);
    }

    //realloc函数用于调整之前分配的内存空间的大小
    //第一个参数是之前分配的内存空间的地址，第二个参数是新的大小
    int* C = (int*)realloc(B, 2*n*sizeof(int));
    //int* C = (int*)realloc(B, 0);
    //realloc函数的第二个参数为0时，等价于free函数

    free(A);
    free(C);
}