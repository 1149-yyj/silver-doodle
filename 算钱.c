#include<stdio.h>
int main()
{
	int x;
	int one,two,five;
	scanf_s("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("可以用%d个一角钱，%d个两角，%d个五角,组成%d块钱\n", one, two, five, x);
					break;
				}
				break;
			}
			break;
		}
	}

	
	return 0;
	}