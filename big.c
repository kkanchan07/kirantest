#include <stdio.h>
big()
{
    // testing 3 tier
    double n1, n2, n3;
    printf("\n Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number. \n ", n1);
    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number. \n ", n2);
    if( n3>=n1 && n3>=n2 )
       printf("%.2f is the largest number. \n ", n3);
}
