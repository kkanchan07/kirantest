#include <stdio.h>
fact()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("\n Enter the number factorial ");
    scanf("%d",&n);
      //show error if the user enters a negative integer
    if (n < 0)
        printf("\n Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
      printf("\n Factorial of %d = %llu", n, factorial);
    }
}
