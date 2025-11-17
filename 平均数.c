#include <stdio.h>

int main()
{
	int number;
	int sum = 0;
	int count=0;

	do {
		scanf_s("%d", &number);
		if (number != -1) {
			sum += number;
			count++;
		}
	} while (number != -1);
	printf("平均数是%f", 1.0 * sum / count);
	return 0;
	
}