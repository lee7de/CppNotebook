/* shopping.c �������ﵥ���� 1.0��ѡ����Ʒ�����ܼ۸� */

#include<stdio.h>
int main(void)
{
	int ch;
	float x, asum=0, bsum=0, csum=0, total=0;
	
	 
	printf("��������Ҫ�������Ʒ��ţ�\n");
	printf("a:ţ��=1Ԫ, b:�㳦=2Ԫ �� c:����=3Ԫ,(����0����): "); 
	ch=getchar();
	printf("�����빺������: ");
	scanf("%f",&x);
	while(ch=='a'||ch=='b'||ch=='c')
	{
	    switch(ch)
		{
		case 'a': 
			asum = 1.00*x; 
			printf("���ǵ�ѡ��! \n");
			break;
		case 'b': 
			bsum = 2.00*x; 
			printf("�ǽ�������ҹ�ļ���!\n");
			break;
		case 'c': 
			csum = 3.00*x; 
			printf("����Ӵ! \n");
			break;
		defalt: 
			break;
		}
		break;
	}
	total = asum + bsum + csum;
	printf("total:%.2f",total);
	
	return 0;
}


