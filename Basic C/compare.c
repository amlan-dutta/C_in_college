#include<stdio.h>
void main(){
	int a , b ;
	printf("Put your two integers (use (,)in between two numbers) ");
	scanf("%d,%d",&a,&b);
	if (a != b){
		if(a>b){
		printf("Your larger number = %d",a);
	}
		else{
		printf("Your larger number = %d",b);
	}
	}
	else{
		printf("You have inputed two equal number");
	}
	getch();
}