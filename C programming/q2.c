#include<stdio.h>

int addNumbers(int *n1, int *n2){
	int sum = *n1 + *n2;
	
	return sum;
}

int main(){
	int x, y, sum;
	
	printf("Enter first number = ");
	scanf("%d", &x);
	printf("Enter second number = ");
	scanf("%d", &y);
	
	sum = addNumbers(&x, &y);
	printf("The sum is %d", sum);
	
	return 0;
}
