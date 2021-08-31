#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
  
int main()
{
    FILE *fptr;
  
    char filename[100]="file.txt", c;
  
    
  
    // Open file
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
  
    // Read contents from file
    char str[100];
    int i = 0;
    c = fgetc(fptr);
    while (c != EOF)
    {
		str[i] = c;
        c = fgetc(fptr);
        i++;
    }
    
    
  	int len = strlen(str);
    
    for(i = len - 1; i >= 0; i--) 
    {
         printf("%c", str[i]);
    }
    fclose(fptr);
    return 0;
}
