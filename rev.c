#include <stdio.h>
rev()
{
    int n, reversedNumber = 0, remainder;
    printf("\n Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", reversedNumber);
    
}