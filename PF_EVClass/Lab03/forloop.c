#include <stdio.h>

int main()
{

    int num = 5;
    
    for (int i = 1;i<=10;i = i + 1)
    {
        printf("%d x %d = %d\n",num,i, num*i);
        
    }


    return 0;
}