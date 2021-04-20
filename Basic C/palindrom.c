#include <stdio.h>
int main()
{
    int n=0,rev=0,remainder=0,org=0,i=0,j=0,arr[50];

    printf("Enter an integer: ");
    scanf("%d", &org);
	n = org;
	
    while( n!=0 )
    {
        arr[i] = n%10;
        n = n/10;
		i++;
    }
	printf("Your reversed number is=");
	
	for(j=0;j<i;j++)
	{	
		printf("%d",arr[j]);
		rev=rev*10+arr[j];
	}
	printf("\n");
	
	
	if (org == rev)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);
    
    getch ();
}