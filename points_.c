#include<stdio.h>
int main()
{
    printf("code for pointers\n");
    int i=100;
    int *p;
    p=&i;
    printf("value of i is %d\naddress of i is %d\naddress of p is %d\nvalue of p is %d\n",i,p,&p,p);
    return 0;
    
}