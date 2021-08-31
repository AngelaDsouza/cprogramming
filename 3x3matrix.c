#include <stdio.h>

int main()
{
    int a[3][3];
    int i=0;
    for(i = 0 ; i<3; i++){
    	int j;
    	for(j=0;j<3;j++){
    		printf("element - [%d],[%d] : ", i,j);
    		scanf("%d", &a[i][j]);
		}
	}
	printf("The matrix is : ");
	for(i = 0 ; i<3; i++){
    	int j;
    	for(j=0;j<3;j++){
    		printf("%d ", a[i][j]);
		}
	}
	
	
    return 0;
}
