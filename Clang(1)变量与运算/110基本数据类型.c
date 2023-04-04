#include <stdio.h>
#include <limits.h>
#include<float.h>

int main()
{
    // 标准整数类型的存储大小
    printf("size of int: %lu \n", sizeof(int));
    // 浮点类型占用的存储空间以及它的范围值 
    printf("size of float: %lu \n", sizeof(float));
    printf("min of float: %E\n", FLT_MIN );
    printf("max of float: %E\n", FLT_MAX );
    printf("Precision: %d\n", FLT_DIG );

    // 隐式将int类型转换为double类型
    int i = 10;
    float f = 3.14;
    double d = i + f; 
    printf("Implicit type conversion: %f\n", d);

    // 显式将double类型转换为int类型
    double d2 = 3.14159;
    int i2 = (int)d2;
    printf("Explicit type conversion: %d\n", i2);

    return 0;
}