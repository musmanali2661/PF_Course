#include <stdio.h>
#include <string.h>

int main()
{
    char* mytext = "I love Pakistan!";

    char buff[10] = {0};
    strncpy(buff, mytext+7, 9);  

    printf("%s", buff);


 
    return 0;
}