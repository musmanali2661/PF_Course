#include <stdio.h>

int main()
{

    //char strMyText[] = "I am uogian"; 
    //char word[7];
    //printf("%s",word);

    int nArr[6] = {0};
    nArr[4] = 78;

    int i = 0;

    while (i<6)
    {
        printf("%d\n", nArr[i]);
        i = i+1;
    }

    return 0;
}