#include<stdio.h>
#include<stdlib.h>

int main(){
	int N, i, j;
	float *ptr;
	
	printf("Enter the size of array = ");
	scanf("%d", &N);
	
	ptr = (float*)calloc(N, sizeof(float));
	if(ptr==NULL){
		printf("Memory not alocated.");
		exit(0);
	}
	
	for(i=0; i<N; i++){
		printf("Element %d => ", i+1);
		scanf("%f", ptr+i);
	}
	
	for(i=1; i<N; i++){
		if(*ptr<*(ptr+i))
			*ptr = *(ptr+i);	
	}
	
	printf("The largest element is %.4f", *ptr);
	
	return 0;
}
