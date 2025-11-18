#include<stdio.h>
int main() {
	int x;
	x = 34;
	//scanf_s("%d", &x);
	int i ;
	int prime = 1;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			prime == 0;
			break;
		}
	}
		if (prime == 0)
		{
			printf("不是素数\n");
		}
		else { 
			printf("是素数\n"); 
		}

	return 0;
}