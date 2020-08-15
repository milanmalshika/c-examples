#include<stdio.h>

void swap(int *n1, int *n2, int *n3){
	int temp;
	temp = *n2;
	*n2 = *n1;
	*n1 = *n3;
	*n3 = temp;
}

int main(){
	int num1, num2, num3;
	printf("Enter the first element=");
	scanf("%d", &num1);
	printf("Enter the second element=");
	scanf("%d", &num2);
	printf("Enter the third element=");
	scanf("%d", &num3);
	
	swap(&num1, &num2, &num3);
	printf("The values after swapping ==> \n");
	printf("first element = %d\n", num1);
	printf("Second element = %d\n", num2);
	printf("Third element = %d\n", num3);
	return 0;
}
