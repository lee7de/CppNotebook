/*
编写一个程序把你的年龄转换成天数,这里不同考虑闰年，即year=365 
*/
#include <stdio.h>
#define DAYS_PER_YEAR 365
/*
利用预编译指令指定一年的天数 
*/

int main(){
	int age, days;
	age = 15; //假设我的年龄是15 
	days = age*DAYS_PER_YEAR;
	printf("Your age is %d,and It is %d days. \n", age, days);
	
	return 0;
}

 
