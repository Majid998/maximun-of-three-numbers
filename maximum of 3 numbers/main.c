/* Maximum of 3 numbers */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0;// here the numbers are predefined van also be user-input.
//    a = 10;
//    b = 20;
//    c = 30;
//
    printf("Hello world!\n");

    printf("Please enter the first number :\n ");
    //printf(" %d %d %d ", a, b, c);
     scanf("%d", &a);

         printf("Please enter the second number :\n ");
         scanf ("%d", &b);

     printf("Please enter the first number :\n ");
     scanf("%d", &c);


     printf("  The three entered numbers are = %d %d %d ", a, b, c);

    // checking if a is the maximum of the 3 numbers

    if( a > b && a > c)
    {
        printf("\n a = %d, is greatest of three numbers", a);
    }
    else if ( b > a && b > c )
    {
            printf("\n b = %d, is greatest of three numbers", b);
    }
    else
    {
            printf("\n c = %d, is greatest of three numbers", c);
    }
    return 0;
}
