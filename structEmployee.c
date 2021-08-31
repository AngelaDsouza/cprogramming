#include <stdio.h>
 
struct employee{
    char    name[30];
    int     age;
    long 	phone;
    float   salary;
    
};

void main(){
	struct employee emp[20] = {
		{"Chirag", 24, 1234567788, 20000},
		{"Arnav", 31, 1234567891, 56000},
		{"Shivam", 45, 8881101111, 30500}
	};
	

	
	printf("Name Age Phone Number Salary\n");
	int i = 0;
	for(i=0;i<3;i++){
		printf("%s ", emp[i].name);
		printf("%d ", emp[i].age);
		printf("%d ", emp[i].phone);
		printf("%f \n", emp[i].salary);
	}
	
}
 
