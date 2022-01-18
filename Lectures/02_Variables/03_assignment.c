#include <stdio.h>

int main(void){
	
	int mark1, mark2;
	int total;
	float average;
	
	printf("Enter the mark1: ");
	scanf("%d", &mark1);
	printf("Enter the mark2: ");
	scanf("%d", &mark2);
	
	printf("mark1 is %d, mark2 is %d.\n", mark1, mark2);
	
	total = mark1 + mark2;
	printf("Total is %d\n", total);
	
	average = total / 2.0;
	
	printf("Average is %.2f", average);
	
	return 0;
}