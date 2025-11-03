#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val = 0;
    val = 111;

    if (val % 2 == 0) 
    { 
        printf("Even");
    }  
    else if(val % 2 == 1)
    {
        printf("Odd");
    }
    return 0;
}