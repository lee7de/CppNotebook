// 这是变量与运算的学习例程 
/*
1、会写注释
2、知道C语言程序的书写
3、会使用printf函数 
*/ 
#include<stdio.h>
#include<math.h>


int main()
{
    double a,b,c,disc,x1,x2,p,q;
    
    
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    p=-b/(2.0*a);
    q=sqrt(disc)/(2.0*a);
    x1=p+q;   
    x2=p-q;
    printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	
	return 0;
}



