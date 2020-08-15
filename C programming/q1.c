#include<stdio.h>

int main(){
	int x, y, sum;
	int *ptr1, *ptr2;
	ptr1 = &x;
	ptr2 = &y;
	
	printf("Enter first number = ");
	scanf("%d", &x);
	printf("Enter second number = ");
	scanf("%d", &y);
	
	sum = *ptr1 + *ptr2;
	printf("The sum is %d", sum);
	
	return 0;
}
