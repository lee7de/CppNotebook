/*
编写一个程序把你的年龄转换成天数,这里不同考虑闰年，即year=365 
增加要求：提示用户输入年龄，还要输出年龄的秒数，（一年按照3.156*10^7s计量) 
*/
#include <stdio.h>
#define DAYS_PER_YEAR 365
#define SEC_PER_YEAR 3.165e7
/*
利用预编译指令指定一年的天数 
*/

int main(void){
	int age, days;
	float second;
	
	printf("请输入你的年龄：");
	scanf("%d", &age);
	days = age*DAYS_PER_YEAR;
	second = age*SEC_PER_YEAR;
	printf("Your age is %d,and It is %d days. \n", age, days);
	printf("And you are %e seconds old, too.\n", second);
	
	return 0;
}

