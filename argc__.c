#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("argc argv \n");
    int i,j,k=0;
    for (size_t i = 0; i < argc; i++)
    {
        /* code */
        printf("argc is %d argv is %s\n",argc,argv[i]);    
    }
    return 0;

}