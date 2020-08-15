#include<stdio.h>
#define MAX 50

int main(){
	char word[MAX];
	char *ptr;
	int count1 = 0;
	int count2 = 0;
	
	printf("Enter the string = ");
	gets(word);
	
	ptr = word;
	
	while(*ptr != '\0'){
		if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' 
		|| *ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u'){
			count1++;
			ptr++;
		}
		else{
			count2++;
			ptr++;
		}
	}
	
	printf("\nThe number of vowels = %d\n", count1);
	printf("\nThe number of consonants = %d\n", count2);
	
	return 0;
}
