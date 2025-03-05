#include <stdio.h>
int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    printf("SOE-Size of A = %d\n, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));//Size of A = 8, size of A[0] = 4
    for(i = 0; i <= size; i++){
        sum += A[i];
    }
    return sum;
}

//$$重点：注意数组作为函数参数时，传参的格式:除了第一个维度外，其他维度的大小必须指定
int FuncA(int* A){}//或者int FuncA(int A[]){}
int FuncB(int (*B)[3]){}//或者int FuncB(int B[][3]){}
int FuncC(int (*C)[2][2]){}//或者int FuncC(int C[][2][2]){}
//$$

int main(){
    int A[5] = {1,2,3,4,5};
    int sum = 0;
    int size  = sizeof(A)/sizeof(A[0]);
    sum = SumOfElements(A, size);
    printf("Sum of elements = %d\n", sum);
    printf("Main-Size of A = %d\n, size of A[0] = %d", sizeof(A), sizeof(A[0]));//Size of A = 20, size of A[0] = 4
    return 0;

    int B[2][3] = {{2,5,6},{4,8,9}};
    int C[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
    FuncA(A);
    FuncB(B);
    FuncC(C);

}