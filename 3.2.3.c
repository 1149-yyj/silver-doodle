#include<stdio.h>
int main(void)
{
	int price = 0;
	int bill = 0;
	printf("��������");
	scanf_s("%d", &price);
	printf("���������");
	scanf_s("%d", &bill);
	int yu = bill - price;
	if (yu < 0)
	{
		printf("Ǯ����,����%dԪ\n",-yu);
	}
	if (yu > 0)
	{
		printf("����%dԪ\n", yu);
	}
	
	 return 0;
}