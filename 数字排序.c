#include<stdio.h>
int main() {
	int a;
	//scanf_s("%d", &a);
	a = 2;
	int i, j, k;
	int count = 0;
	i = a;
	while (i <= a+3) {
		i++;
		j = a;
		while (j <= a+3) {
			j++;
			k = a;
			while (k <= a+3) {
				k++;
				if (i != j) {
					if (j != k) {
						if (k != i) {
							printf("%d%d%d",i,j,k);
							count++;
							if (count == 6) {
								printf(" \n");
								count = 0;
							}
							else {
								printf(" ");
							}
						}
					}
				}
			}
		}
	}
	return 0;
	
}