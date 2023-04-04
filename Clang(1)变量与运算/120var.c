#include <stdio.h>

int x;
int y;
int addtwonum()
{
    // 函数内说明外部的变量x、y
    extern int x;
    extern int y;
    x = 1, y = 2;
    return x + y;
}

int main()
{
    int result;
    result = addtwonum();

    printf("result: %d", result);

    return 0;
}