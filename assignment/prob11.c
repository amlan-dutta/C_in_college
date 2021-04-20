#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	char s[500], source[20],comp[20];
	FILE *f1;
	int count=0;
	
	printf("Enter name of file to copy\n");
   	gets(source);
	
	f1= fopen(source, "r");
	
	while( fgets(s,100,f1) != NULL )
	{
		fscanf(f1,"%s",comp);
		if (strcmp(comp, "hello") == 0)      
			++count;
	}
	printf("%d",count);
	return 0;
}
