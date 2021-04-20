#include<stdio.h>
void main(){
	int d,m,yr,i=0;
	printf("Enter your date (put',' in between date,month and year)");
	scanf("%d,%d,%d",&d,&m,&yr);
	if (m==2)
	{
		if((yr%100 == 0 && yr%400 == 0)||(yr%100 != 0 && yr%4 ==0))
	{
		if(d>0 && d<=29)
				i=1;
	}
		else 
	{
		if(d>0&&d<=28)
			i=1;
	}
	}
			
	
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		if(d>0 && d<=31)
			i=1;
		}
	else if(m==4||m==6||m==9||m==11)
	{
		if(d>0 && d<=30)
			i=1;
		}
	else 
		i=0;
	if(m<1||m>12)
		i=0;
	
	if(i==0)
		printf("Invalid");
	else
		printf("valid");
	getch();
}