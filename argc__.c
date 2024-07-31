
// argc argv working 
#include <stdio.h>
 
// defining main with arguments
int main(int argc, char* argv[])
{
    
    printf("the program name and executable file is %s\n",argv[0]);
    printf("You have entered %d arguments:\nThey are :-\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("position is %d and content is %s\n", i, argv[i]);
    }
    return 0;
}