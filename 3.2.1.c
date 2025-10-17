#include<stdio.h>
int main(void)
{
	int hour1, min1;
	int hour2, min2;
	scanf_s("%d %d", &hour1, &min1);
	scanf_s("%d %d", &hour2, &min2);
	int new_h = hour2 - hour1;
	int new_m = min2 - min1;
	if (new_m < 0);
	{
		new_m += 60;
		new_h -= 1;
	}
	printf("时间差是%d时%d分", new_h, new_m);
	 return 0;
}