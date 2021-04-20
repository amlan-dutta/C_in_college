#include<stdio.h>
void main()
{
	int i;
	float t1, t2;
	printf("If you want to convert temparature from celcius to farrenhite then press 1\n");
	printf("or from farrenhite to celcius then press 2\n");
	scanf("%d",&i);
	
	if(i==1)
	{
		printf("Now entre the temparature");
		scanf("%f",&t1);
		t2 = 9*t1/5+32;
		printf("%f degree celcius = %f degree farrenhite",t1,t2);
	}
	else if(i==2)
	{
		printf("Now entre the temparature");
		scanf("%f",&t1);
		t2 = 5*(t1-32)/9;
		printf("%.2f degree farrenhite = %.2f degree celcius",t1,t2);
	}
	else
		printf("You does not follow user instructions");
	getch();
}