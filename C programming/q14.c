#include<stdio.h>
#include<string.h>
#define MAX 50

void reverse(char *str){
	int length, i;
	char *begin, *end, temp;
	length = strlen(str);
	
	begin = str;
	end = str;
	
	for(i=0; i<length-1; i++){
		end++;
	}
	
	for(i=0; i<length/2; i++){
		
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}

int main(){
	char word[MAX];
	printf("Enter the string = ");
	gets(word);
	
	reverse(word);
	
	printf("Reversed string ==> %s", word);
	return 0;
}
