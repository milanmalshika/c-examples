#include<stdio.h>
#define MAX 50

int main(){
	char word[MAX];
	char *ptr;
	int count=0;
	
	printf("Enter your string=>\n");
	gets(word);
	
	ptr = word;
	
	while(*ptr != '\0'){
		count++;
		ptr++;
	}	
	
	printf("The length of this string is %d", count);
	return 0;
}
