#include <stdio.h>
int main()
{
int p,n;
float r,si;

p = 1000 ;
n=3;
r = 8.5 ;
/* formula for simple interest */
si = p * n * r / 100 ;
printf ( "simple interest on principal amount %d for %d years at %f percent rate of interest is %f\n" , p,n,r, si ) ;

return 0;
}
