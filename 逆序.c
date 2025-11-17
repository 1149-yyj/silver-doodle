#include<stdio.h>
int main()
{
	
	int x;
	scanf_s("%d", &x);
	
	int digit;
	int ret = 0;
	while (x > 0) {
		int digit = x % 10;
		printf("%d", digit);
		 ret = ret * 10 + digit;
		x /= 10;
	}
	printf("反转后的数为：%d", ret);
	return 0;
}