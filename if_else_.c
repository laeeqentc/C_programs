#include <stdio.h>

int main( )
{
int num ;
printf ( "Enter a number less than 10 \n" ) ;
scanf ( "%d", &num ) ;
if ( num <= 10 )
printf ( "What an obedient servant you are \n!" ) ;
else 
printf("num entered is %d and it is greater than 10\n",num);
return 0;
}