#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s, source[20];
	FILE *f1;
	
	printf("Enter name of file to copy\n");
   	gets(source);
	
	f1= fopen(source, "r");
	
	printf("\n");
	while( (s = fgetc(f1)) != EOF )
	{
		printf("%c",s);
	}
	printf("\n");
	return 0;
}
 