#include<stdio.h>
int main(void)
{
	int a=0;
	int b=0;
	scanf_s("%d %d", &a, &b);
	int hour = a/ 100;
	int min = a% 100;
	int total = (hour * 60)+min;
	total += b;
	int new_hour = total / 60;
	int new_min = total % 60;
	
	printf("%d%02d",new_hour,new_min);
	
	 return 0;
}