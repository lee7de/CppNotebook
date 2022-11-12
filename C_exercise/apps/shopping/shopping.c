/* shopping.c ——购物单问题 1.0，选择商品计算总价格 */

#include<stdio.h>
int main(void)
{
	int ch;
	float x, asum=0, bsum=0, csum=0, total=0;
	
	 
	printf("请输入您要购买的商品编号：\n");
	printf("a:牛奶=1元, b:香肠=2元 或 c:泡面=3元,(输入0结束): "); 
	ch=getchar();
	printf("请输入购买数量: ");
	scanf("%f",&x);
	while(ch=='a'||ch=='b'||ch=='c')
	{
	    switch(ch)
		{
		case 'a': 
			asum = 1.00*x; 
			printf("明智的选择! \n");
			break;
		case 'b': 
			bsum = 2.00*x; 
			printf("那将是你深夜的佳友!\n");
			break;
		case 'c': 
			csum = 3.00*x; 
			printf("不错哟! \n");
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


