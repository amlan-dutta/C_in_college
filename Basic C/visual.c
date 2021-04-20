#include <stdio.h>

void main()
{
    int n, sum = 0, rem = 0, num;

    printf ("enter a number");
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem*rem*rem);
        n = n/10;
		//printf("%d %d ",rem,sum);
	}
    if (sum==num)
        printf ("%d is an armstrong no.",num);
    else
        printf ("%d is not an armstrong no.",num);
	getch();
}