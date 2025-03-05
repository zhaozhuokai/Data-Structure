#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b
{
    return a + b;
}

void PrintHello()
{
    printf("Hello\n");
}

void PrintHelloTo(char* name)
{
    printf("Hello %s\n", name);
}

int main()
{
    int (*p)(int, int);//函数指针的格式：返回值类型(*指针变量名)(参数类型1, 参数类型2, ...)
    void (*q)();
    void (*r)(char*);

    p = &Add;//或者p = Add;
    q = PrintHello;
    r = PrintHelloTo;

    printf("%d\n", p(2, 3));
    q();
    r("World");
}