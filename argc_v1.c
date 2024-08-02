#include<stdio.h>
int main(int argc, char*argv[])
{
    int i,j;
    i=0;j=0;
    printf("program for argc argv\nEnter input parameters\n");
    printf("program executable name is %s\n",argv[0]);
    printf("total parameters are %d\n",argc);
    for (i=1;i<argc;++i)
    {
        printf("input parameter at position %d is %s\n",i, argv[i]);
    }
    return 0;
}