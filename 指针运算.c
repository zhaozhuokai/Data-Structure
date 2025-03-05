#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("%d\n", p);
    printf("the size of Integer is %d bytes\n", sizeof(int));
    printf("%d\n", p+1);

    int arr[4] = {1,2,3,4};
    int *p1 = arr;
    printf("%d\n", p1);
    printf("%d\n", p1+1);
    printf("%d\n", *p1);
    printf("%d\n", *(p1+1));

}