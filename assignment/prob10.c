#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s, source[20], target[20];
	FILE *f1,*f2;
	
	printf("Enter name of file to copy\n");
   	gets(source);
	
	f1= fopen(source, "r");
   	
   	printf("Enter name of target file\n");
   	gets(target);
   
	f2= fopen(target, "w");
	
	while( (s = fgetc(f1)) != EOF )
      fputc(s, f2);
 
	printf("File copied successfully");
	
	fclose(f1);
	
	return 0;
}
