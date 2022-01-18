#include <stdio.h>

struct employee{
	int empNo;
	double salary;
	double bonus;
	double fullSalary;
}emp1, emp2;

int main(void){
	
	// emp1 details
	printf("enter employee1 details: \n");
	printf("employee number: ");
	scanf("%d", &emp1.empNo);
	printf("employee salary: ");
	scanf("%lf", &emp1.salary);
	printf("employee bonus: ");
	scanf("%lf", &emp1.bonus);
	
	printf("\n\n");
	
	// emp2 details
	printf("enter employee2 details: \n");
	printf("employee number: ");
	scanf("%d", &emp2.empNo);
	printf("employee salary: ");
	scanf("%lf", &emp2.salary);
	printf("employee bonus: ");
	scanf("%lf", &emp2.bonus);
	
	
	// emp1 full salary
	emp1.fullSalary = emp1.bonus + emp1.salary;
	// emp2 full salary
	emp2.fullSalary = emp2.bonus + emp2.salary;
	
	// print details	
	printf("\n\n");
	printf("full salary details: \n");
	printf("\temp1 full salary %.2lf\n", emp1.fullSalary);
	printf("\temp2 full salary %.2lf\n", emp2.fullSalary);
	
	return 0;
}