#include<stdio.h>
int main() {
	
		int n;
		scanf_s("%d", &n);

		int i;
		double sum = 0.0;
		for (i = 1; i <= n; i++) {

			sum += 1.0 / i;
		}printf("f(%d)=%f", n, sum);
		return 0;
	
}