#include <stdio.h>
#include <string.h>

void swap(char *n1, char *n2){
    char temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void permutation(char *a, int l, int r){
    int i;
    if (l == r){
		printf("%s\n", a);
    }
     
   else{
       for (i = l; i <= r; i++){
          swap((a+l), (a+i));
          permutation(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}

int main(){
    char word[50];
    printf("Enter String: ");
    gets(word);
    int len = strlen(word);
    permutation(word, 0, len-1);
    return 0;
}
