/* Calculation of gross salary */
#include <stdio.h>
int main( )
{
    printf("program for calculating total gross salary\n");

float bs, gs, da, hra ;
printf ( "Enter basic salary\n") ;
scanf ( "%f", &bs ) ;
if ( bs < 1500 )
{
hra = bs * 10 / 100 ;
da = bs * 90 / 100 ;
}
else
{
hra = 500 ;
da = bs * 98 / 100 ;
}
gs = bs + hra + da ;
printf ( "gross salary = Rs. %f\n", gs ) ;
return 0;
}