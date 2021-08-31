#include<stdio.h>


int main(){
	printf("Enter your choice : ");
	int choice;
	
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Food item - Pizza\nPrice - Rs 179");
			break;
		case 2:
			printf("Food item - Burgger\nPrice - Rs 129");
			break;
		case 3:
			printf("Food item - Pasta\nPrice - Rs 179");
			break;
		case 4:
			printf("Food item - French Fries\nPrice - Rs 99");
			break;
		case 5:
			printf("Food item - Sandwich\nPrice - Rs 149");
			break;
		default:
			printf("You have entered a wrong choice");
	}
	
}
