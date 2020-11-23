#include<stdio.h>
int main() {
	int n = 0;
	int sum = 1;
	
	scanf_s("%d", &n);
	
	for (int a = 1; a <= n;a++) {
		
		sum *= a;
	}
	printf("%d", sum);
	return 0;
}