#include <stdio.h>
fact()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("\n Enter the number ");
    scanf("%d",&n);
    // show error if the user enters a negative integer
    if (n < 0)
        printf("\n Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
<<<<<<< HEAD
   
=======
    
>>>>>>> 9f12043b9cbc598f5038b9890d103616452fd7a2
}
