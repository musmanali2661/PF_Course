#include <stdio.h>
#include <string.h>

int main()
{
    char* mytext = "I Love Pakistan";

    char sArr[18] = {0};

    strncpy(sArr, mytext, 10);

    printf("%s\n", sArr);


    return 0;
}