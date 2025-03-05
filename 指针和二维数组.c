#include <stdio.h>
int main()
{
    //指针和多维数组
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*pB)[3] = B; 
    printf("%d\n", B); 
    printf("%d\n", &B[0]); 
    printf("%d\n", *B);
    printf("%d\n", B[0]);
    printf("%d\n", &B[0][0]);
    printf("*******\n");
    printf("%d\n", B+1);
    printf("%d\n", &B[1]);
    printf("%d\n", *(B+1));
    printf("%d\n", B[1]);
    printf("%d\n", &B[1][0]);
    printf("*******\n");
    printf("%d\n", *(B+1)+2);
    printf("%d\n", B[1]+2);
    printf("%d\n", &B[1][2]);
    printf("*******\n");
    printf("%d\n", *(*B+1));
    printf("%d\n", B[0][1]);

//$$小结$$
//B[i][j] = *(B[i]+j) = *(*(B+i)+j)

}