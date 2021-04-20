#include<stdio.h>
    int main() {
		int i, j;
        int grades[2][5];
        float average1 , average2;

        grades[0][0] = 80;
        grades[0][1] = 70;
        grades[0][2] = 65;
        grades[0][3] = 89;
        grades[0][4] = 90;

        grades[1][0] = 85;
        grades[1][1] = 80;
        grades[1][2] = 80;
        grades[1][3] = 82;
        grades[1][4] = 87;
			
		if(grades[0][j]) {
			average1 = 0;
			for(j = 0; j < 5; j++){
				average1 += grades[0][j];
			}
			average1 /=5;
		}
		
		if (grades[1][j]) {
			average2 = 0;
			for(j = 0; j < 5; j++){
				average2 += grades[1][j];
			}
			average2 /=5;
		}
			printf("The average marks obtained in Physics is: %f\n", average1);
			printf("The average marks obtained in Chemistry is: %f\n", average2);
		

        getch();
    }