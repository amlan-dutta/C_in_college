#include<stdio.h>
#include<string.h>
int main()
{
	char first[10],sec[10],last[10];
	int f,m,l,i=0,j=0,k=0;
	printf("Enter your first name");
	scanf("%s",&first[i]);
	printf("Enter your middle name");
	scanf("%s",&sec[j]);
	printf("Enter your last name");
	scanf("%s",&last[k]);
	
	f = strlen(first);
	m = strlen(sec);
	l = strlen(last);
	if(f>m && f>l)
	printf("First name is maximum\n");
	else if(m>f && m>l)
	printf("Middle name is maximum\n");
	else
	printf("Last name is maximum\n");
	
	if (f<m && f<l)
	printf("First name is minimum\n");
	else if (m<f && m<l)
	printf("Middle name is minimum\n");
	else
	printf("Last name is minimum\n");
	
	getch();
	
	return 0;
}
