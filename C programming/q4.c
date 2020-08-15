#include<stdio.h>
#define MAX 100

int main(){
	int array[MAX];
	int N, i;
	int *ptr = array;
	
	printf("Enter size of array = ");
	scanf("%d", &N);
	printf("Enter the elements of array ==> \n");
	
	for(i=0; i<N; i++){
		scanf("%d", ptr);
		ptr++;
	}
	ptr = array;
	
	printf("The array is ==> \n");
	for(i=0; i<N; i++){
		printf("%d\t", *ptr);
		ptr++;
	}
	
	return 0;
}
