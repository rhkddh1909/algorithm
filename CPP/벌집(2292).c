#include<stdio.h>

int main(void) {
	int num = 0;
	int a = 1;
	int count = 1;
	scanf("%d", &num);
	while ((a<num)) {
		a = a + (count * 6);
		count++;
	}
	printf("%d", count);
	return 0;
}