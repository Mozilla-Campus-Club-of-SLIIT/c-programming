#include <stdio.h>

int main(void){
	
	// variable declaration
	int number1, number2;
	int sum;
	
	printf("Enter the number1: ");
	scanf("%d", &number1);
	printf("Enter the number2: ");
	scanf("%d", &number2);
	
	sum = number1 + number2;
	
	printf("sum of %d and %d is %d", number1, number2, sum);
	
	return 0;
}