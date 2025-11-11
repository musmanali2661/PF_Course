#include <stdio.h>

int main()
{
    int V = 786;
    int* ptrToInt;
    ptrToInt = &V;
    printf("%d", *ptrToInt); 
   
    return 0;
}