#include<stdio.h>
void main(){
	int n, i, x=0;
	printf("Enter a positive number");
	scanf("%d",&n);
	
	if (n==1)
		printf(" 1 is a composite number");
	else{
		for(i=2;i<=n/2;i++){
			if ( n%i ==0){
			x = 1;
			break;}
		}
		if (x == 0)
			printf(" %d is a prime number",n);
		else 
			printf("%d is not a prime number",n);
	}
	
	getch();
}
		