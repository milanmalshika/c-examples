#include<stdio.h>
#include<stdlib.h>

int fact(int* num){
    int fact=1,i;
    
    for(i=1; i<=(*num); i++){
        fact=fact*i;
    }
    
    return fact;
}

int main(){
    int number;
    int facto;
    
    printf("Enter the number = ");
    scanf("%d",&number);
    
    facto=fact( &number);
    
    printf("\nFactorial value of given number = %d\n", facto);
    return 0;
}
