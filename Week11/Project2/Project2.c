# include <stdio.h>

void swap(int* x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main() {
	int a = 5, b = 7;
	swap(&a, &b);
	printf(
		"num1 value : %d\nnum2 value : %d", a, b
	);
}