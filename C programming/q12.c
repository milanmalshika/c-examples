#include<stdio.h>

int main(){
	int i, N, sum = 0;
	printf("Enter the size of array = ");
	scanf("%d", &N);
	int array[N];
	int *ptr;
	
	printf("Enter the elements ==> \n");
	for(i=0; i<N; i++){
		scanf("%d", &array[i]);
	}
	ptr = array;
	
	for(i=0; i<N; i++){
		sum = sum + *ptr;
		ptr++;
	}
	
	printf("\nThe sum of all elements is %d\n", sum);
	
	return 0;
}
