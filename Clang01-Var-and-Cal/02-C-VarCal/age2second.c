/*
��дһ��������������ת��������,���ﲻͬ�������꣬��year=365 
����Ҫ����ʾ�û��������䣬��Ҫ����������������һ�갴��3.156*10^7s����) 
*/
#include <stdio.h>
#define DAYS_PER_YEAR 365
#define SEC_PER_YEAR 3.165e7
/*
����Ԥ����ָ��ָ��һ������� 
*/

int main(void){
	int age, days;
	float second;
	
	printf("������������䣺");
	scanf("%d", &age);
	days = age*DAYS_PER_YEAR;
	second = age*SEC_PER_YEAR;
	printf("Your age is %d,and It is %d days. \n", age, days);
	printf("And you are %e seconds old, too.\n", second);
	
	return 0;
}

