#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("test code argc argv\n");
    printf("name of program excutable is %s\n",argv[0]);
    int i=0;
    for (i=0;i<=argc-1;++i)
    {
        printf ("argc is %d, i is %d, argv is %s\n", argc, i, argv[i]);
    }    
return 0;
}