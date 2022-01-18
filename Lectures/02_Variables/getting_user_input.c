#include <stdio.h>

int main(){
	
	// variable declaration
	int number;
	char letter;
	float average;
	double volume;
	
	// integer
	//	printf("Enter the number: ");
	//	scanf("%d", &number);
	//	printf("Number is %d", number);
	
	// character
	//	printf("Enter the character: ");
	//	scanf("%c", &letter);
	//	printf("Character is %c", letter);
	
	// float
	//	printf("Enter the average: ");
	//	scanf("%f", &average);
	//	printf("Average is %f", average);
	
	//double
	//	printf("Enter the volume: ");
	//	scanf("%lf", &volume);
	//	printf("Volume is %lf", volume);
	
	// special thing about character
	printf("Enter the number: ");
	scanf("%d", &number);
	printf("Enter the character: ");
	scanf(" %c", &letter);
	
	printf("My number is %d, My letter is %c", number, letter);
	
	return 0;
}