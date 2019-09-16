#include <stdio.h>
rev()
{
    int n, reversedNumber = 0, remainder;
    printf("\n Enter a number for rev: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("\n Reversed Number = %d", reversedNumber);
    
}
