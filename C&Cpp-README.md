# C and Cpp Basic



## 例程：Hello World !

```c
#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}
```

## C程序的组成

C语言由主函数和子函数组成。每次运行程序手动执行的叫做主函数，子函数是由主函数调用执行的。

# 准备工作

变量

C语言处理的数据以变量或常量的形式存在

### 语句、表达式

C 语言的代码由一行行语句（statement）组成。语句就是程序执行的一个操作命令，必须使用分号结尾

表达式（expression）是一个计算式，用来获取值

### 语句块

C 语言允许多个语句使用一对大括号`{}`，组成一个块，也称为复合语句（compounded statement）。在语法上，语句块可以视为多个语句组成的一个复合语句。

### 空格

C 语言里面的空格，主要用来帮助编译器区分语法单位。如果语法单位不用空格就能区分，空格就不是必须的，只是为了增加代码的可读性。

### 注释

注释是对代码的说明，编译器会忽略注释，也就是说，注释对实际代码没有影响。

### printf()

`printf()`的作用是将参数文本输出到屏幕。它名字里面的`f`代表`format`（格式化），表示可以定制输出文本的格式。

```c
printf("Hello World");
```

上面命令会在屏幕上输出一行文字“Hello World”。

## [程序的调试 Debug](https://www.jianshu.com/p/1602264dadf2)

调试，就是跟踪程序的运行过程，从而发现程序的逻辑错误（思路错误），或者隐藏的缺陷（Bug）。

在调试的过程中，我们可以监控程序的每一个细节，包括变量的值、函数的调用过程、内存中数据、线程的调度等，从而发现隐藏的错误或者低效的代码。

## 编程练习

  

# 变量与运算



## 习题

### 求两个整数之和

```c
#include <stdio.h>
int main( )
{ 
  int a,b,sum; 
  a = 123;                    
  b = 456;                     
  sum =  a + b;                  
  printf(”sum is %d\n”,sum);              
  return 0;                          
} 
```

### 华氏-摄氏温度转化

有人用温度计测量出用华氏法表示的温度(如F)，今要求把它转换为以摄氏法表示的温度(如C)。

>   备注：$c=\cfrac{5}{9}(f-32)$

```c
#include <stdio.h>
int main ( )
{
   float f,c; 
   f=64.0; 
   c=(5.0/9)(f-32); 
   printf("f=%f\nc=%f\n",f,c);        
   return 0;
 }
```

### 三角形面积

已知三角形的三边长，求三角形面积。

>   $area=\sqrt{s(s-a)(s-b)(s-c)} 其中，s=\frac{a+b+c}{2}$

```c
#include <stdio.h>
#include <math.h>

int main ( ){
    double a,b,c,s,area; 
    a=3.67;                                
    b=5.43;                 
    c=6.21;                            
    s=(a+b+c)/2;	                      
    area=sqrt(s(s-a)(s-b)(s-c));
    printf("a=%f\tb=%f\t%f\n",a,b,c);     
    printf("area=%f\n",area);
    
    return 0;
 }
```



# 流程控制与指针

## 流程控制



## 指针



# 函数与数组

## 函数





## 数组



# 结构







# 文件





# 资源链接

[1] 刷题：浙江大学 PAT https://www.patest.cn/practice

[2] 菜鸟教程-C语言 https://www.runoob.com/cprogramming/c-intro.html

[3] C程序编译流程 https://bbs.huaweicloud.com/blogs/291863

[4] 教材：C primer plus

[5] 使用Dev-C++调试程序 https://www.jianshu.com/p/1602264dadf2
