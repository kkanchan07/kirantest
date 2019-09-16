#include <stdio.h>
palin()
{
    int n, reversedInteger = 0, remainder, originalInteger;
    printf("\n Enter the numbers for palindrom: ");
    scanf("%d", &n);
    originalInteger = n;
    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("\n %d is a palindrome.", originalInteger);
    else
        printf("\n %d is not a palindrome.", originalInteger);
}
