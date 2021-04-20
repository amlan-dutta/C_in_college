#include<stdio.h>
#include<math.h>
void main(){
	float a;
	scanf("%f",&a);
	a = (a*3.1416)/180;
	a=pow(cos(a),2)+pow(sin(a),2);
	printf("%f",a);
}