#include<stdio.h>
int main(void)
{
	int price = 0;
	int bill = 0;
	printf("请输入金额");
	scanf_s("%d", &price);
	printf("请输入面额");
	scanf_s("%d", &bill);
	int yu = bill - price;
	if (yu < 0)
	{
		printf("钱不够,还差%d元\n",-yu);
	}
	if (yu > 0)
	{
		printf("找您%d元\n", yu);
	}
	
	 return 0;
}