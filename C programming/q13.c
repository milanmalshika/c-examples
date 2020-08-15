#include<stdio.h>

int main(){
	int N, i;
	printf("Enter the size of array = ");
	scanf("%d", &N);
	int *ptr;
	
	int array[N];
	ptr = array;
	printf("Enter the values ==> \n");
	for(i=0; i<N; i++){
		scanf("%d", ptr);
		ptr++;
	}
	
	ptr = &array[N-1];
	printf("Reversed array is ==> \n");
	for(i=N; i>0; i--){
		printf("%d\t", *ptr);
		ptr--;
	}
	
	return 0;
}
