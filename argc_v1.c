#include <stdio.h>
int main(int argc, char * argv[])
{
    int i,j;
    printf ("code for argc, argv[]\n");
    printf ("progam name is %s\n",argv[0]);
    printf ("inputs are total %d\n",argc);
    for (i=0;i<argc;i++)
    {
        printf("input at %d position is %s\n", i, argv[i]);
    }
    return 0;
}