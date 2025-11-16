#include<stdio.h>
#include<stdlib.h >
#include<time.h>
int main(void)
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好一个1-100的数了\n");
	fflush(stdout);

	do {
		printf("你现在可以输入一个1-100的数了:\n");
		scanf_s("%d", &a);
		count++;

		if (a > number) {
			printf("大了\n");
		}
		else if (a < number) {
			printf("小了\n");
		}

	} while (a != number);
	printf("恭喜你花了%d次猜对了", count);

	return 0;
}