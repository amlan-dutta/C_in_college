#include<stdio.h>
void main (){
	int yr;
	printf("Enter your year");
	scanf("%d",&yr);
	
	if((yr%100 == 0 && yr%400 ==0)||(yr%100 != 0 && yr%4 ==0))
		printf("The %d year is leap year",yr);
	else
		printf("The %d year is not a leap year",yr);
	/*if (yr%100 == 0){
		if (yr%400 ==0)
		printf("The %d year is leap year",yr);
		else
			printf("The %d year is not a leap year \n",yr);
	}
	else if (yr%4 == 0)
		printf("The %d year is leap year \n",yr);
	
	else
		printf("The %d year is not a leap year \n",yr);   */
	getch();
}