#include <stdio.h>
#include<math.h>

void main()
{
    int n, sum = 0, rem = 0, num;

    printf ("enter a number");
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem,3);
        n = n/10;
	}
    if (sum==num)
        printf ("\n %d is an armstrong no.\n",num);
    else
        printf ("\n %d is not an armstrong no.\n",num);
}
