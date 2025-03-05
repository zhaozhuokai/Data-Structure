#include <stdio.h>
int main(){
    int a = 10;
    int *x = &a;
    int **y = &x;
    printf("%d\n", *x);//10
    printf("%d\n", **y);//10
    printf("%d\n", *y);//x的地址
    printf("%d\n", x);//x的地址
    printf("%d\n", y); //y的地址
}