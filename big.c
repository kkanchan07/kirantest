#include <stdio.h>
big()
{
    double n1, n2, n3;
    printf("\n Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number. \n ", n1);
    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number. \n ", n2);
    if( n3>=n1 && n3>=n2 )
<<<<<<< HEAD
        printf("%.2f is the largest number. \n ", n3);
}
=======
        printf("%.2f is the largest number.", n3);
   }
>>>>>>> 9f12043b9cbc598f5038b9890d103616452fd7a2
