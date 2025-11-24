#include <stdio.h>
#include <string.h>

int main()
{
    char* mytext = "I Love Pakistan!";
    char buff[10] = "";
    strncpy(buff, mytext, 5);  
    printf("%s", buff);
 
    return 0;
}