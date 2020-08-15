#include<stdio.h>

void sort(int n , int *ptr){
	int i, j, temp;

    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++){
            if(*(ptr+j)<*(ptr+i)){
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    
    printf("Sorted array ==> \n");
    for(i=0; i<n; i++){
    	printf("\t%d \t", *(ptr + i));
	}
}

int main(){
	int N,i;
	printf("Enter the size of array = ");
	scanf("%d", &N);
	int array[N];
	
	printf("Enter the array==>\n");
	for(i=0; i<N; i++){
		scanf("%d", &array[i]);
	}
	
	sort(N, array);
	
	return 0;
}
