/* A quick demo of nested if-else */
#include <stdio.h>
int main ()
{
int i ;
printf ( "Enter either 1 or 2 \n" ) ;
scanf ( "%d", &i ) ;
if ( i == 1 )
printf ( "You entered %d\n",i);
else
{
if ( i == 2 )
printf ( "You entered %d\n",i);
else
printf ( "You entered %d\n",i);
}
return 0;
}