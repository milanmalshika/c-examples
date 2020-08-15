#include<stdio.h>

int main(){
	int x, y;
	int *ptr1, *ptr2;
	ptr1 = &x;
	ptr2 = &y;
	
	printf("Enter the first number = ");
	scanf("%d", &x);
	printf("Enter the second number = ");
	scanf("%d", &y);
	
	if(*ptr1 > *ptr2){
		printf("The maximum number is %d", *ptr1);
	}
	else{
		printf("The maximum number is %d", *ptr2);
	}
	
	return 0;
}
