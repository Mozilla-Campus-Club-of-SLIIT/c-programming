#include <stdio.h>

struct student{
	int regNo;
	int age;
	int grade;
	char gender;
}student1;

int main(void){
	
	// student structure variable
	// struct student student1;
	
	// assign values and print
	//	student1.regNo = 1230;
	//	student1.age = 18;
	//	student1.grade = 12;
	//	student1.gender = 'M';
	
	// get data from user
	printf("Enter register number: ");
	scanf("%d", &student1.regNo);
	printf("Enter age: ");
	scanf("%d", &student1.age);
	printf("Enter grade: ");
	scanf("%d", &student1.grade);
	printf("Enter gender: ");
	scanf(" %c", &student1.gender);
	
	// print values
	printf("Student1 register number: %d\n", student1.regNo);
	printf("Student1 age: %d\n", student1.age);
	printf("Student1 grade: %d\n", student1.grade);
	printf("Student1 gender: %c\n", student1.gender);
	
	return 0;
}