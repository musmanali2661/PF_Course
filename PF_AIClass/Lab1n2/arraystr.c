#include <stdio.h>


int main()
{
    char* mytext = "I am from Pakistan";

    char  chArr[19] = "I am from Pakistan";

    mytext[5] = '\0';

    printf("%s\n", mytext);

    
    
    return 0;
}