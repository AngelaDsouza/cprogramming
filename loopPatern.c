#include<stdio.h>

void main(){
	int i = 0;
	for(i = 0; i<6; i++){
		int j = 0;
		for(j = -1; j<i; j++){
			printf("01");
		}
		printf(" ");
	}
}
