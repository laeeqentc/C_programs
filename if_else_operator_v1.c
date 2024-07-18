#include<stdio.h>
int main( )
{
int m1, m2, m3, m4, m5;
float per;
printf ( "Enter marks in five subjects \n" ) ;
scanf ( "%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 ) ;
per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ;
if ( per >= 60 )
printf ( "First division average is %f\n", per);
if ( ( per >= 50 ) && ( per < 60 ) )
printf ( "Second division average is %f\n", per) ;
if ( ( per >= 40 ) && ( per < 50 ) )
printf ( "Third division average is %f\n", per) ;
if ( per < 40 )
printf ( "Fail average is %f",per ) ;
return 0;
}