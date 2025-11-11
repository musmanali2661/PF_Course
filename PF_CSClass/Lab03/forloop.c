#include <stdio.h>

int main()
{
    long long num = 117986729847321;
    int p = 1;

    for (int i=2;i<num;i=i+1)
    {
      if(num%i==0)
      {
        p = 0;
        printf("%d\n",i);
        //break;
      }
    }

    if(p==1)
       printf("Prime\n");
    else
       printf(" Not Prime\n");
        
        




    return 0;
}