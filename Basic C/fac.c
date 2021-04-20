#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int multiplyNumbers(int n);

int main() {
    int n ;
    scanf("%d",&n);
    printf("%ld", multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
        return n*multiplyNumbers(n-1);
}