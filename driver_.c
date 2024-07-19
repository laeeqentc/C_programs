/*in this example we expect the answer to be
either ‘Driver is insured’ or ‘Driver is not insured’. If we list down
all those cases in which the driver is insured, then they would be:
(a) Driver is married.
(b) Driver is an unmarried male above 30 years of age.
(c) Driver is an unmarried female above 25 years of age.
Since all these cases lead to the driver being insured, they can be
combined together using && and || as shown in the program
below:
/* Insurance of driver - using logical operators */
#include<stdio.h>
int main()
{
char sex, ms ;
int age ;
printf ( "Enter age, sex, marital status\n" ) ;
scanf ( "%d %c %c\n",&age, &sex, &ms ) ;
if ( ( ms == 'M') || ( ms == 'U' && sex == 'M' && age > 30 ) ||
( ms == 'U' && sex == 'F' && age > 25 ) )
printf ( "Driver is insured\n" ) ;
else
printf ( "Driver is not insured\n" ) ;
return 0;
}