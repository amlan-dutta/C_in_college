#include<stdio.h>
void main(){
	float p, n, s;
	printf("Now we are going to calculate the price after discount\n"); 
	printf("Printed Price(in rupees)="); 
	scanf("%f",&p);
	printf("Discount(in percentage)=");
	scanf("%f",&n);
	s = p-(p*n/100);
	printf("Your price of the product(in rupees)= %f \n" ,s);
	getch ();
}
 