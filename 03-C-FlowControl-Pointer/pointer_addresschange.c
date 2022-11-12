#include<stdio.h>

int main()
{
    int x = 2;
    int *p;
    p = &x;
    
    printf("p-->%p\n", p);

    printf("x: %d\n", x);

    printf("x'address: %p\n", &x);

    printf("x can be used by pointer: %d", *p);

    // 深刻体会到&与*互为逆运算的内涵！ *p = x &p == x x == *(&i)
    // *面向地址，&面向变量！

	return 0;
}