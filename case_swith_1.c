#include <stdio.h>
int main( )
{
int i,j;
printf ("Enter value of i\n");
scanf ("%d",&i);
printf ("value of i is %d\n", i);
switch (i)
{
    printf ("Hello in switch\n");
    case 1 :
        j = 10 ;
        break ;
    case 2 :
        j = 20 ;
        break ;
}
return 0;
}