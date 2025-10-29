#include <stdio.h>

int main()
{

  
   printf("int = %d\n", sizeof(int));
   printf("float = %d\n", sizeof(float));
   printf("char = %d\n", sizeof(char));
   printf("long = %d\n", sizeof(long));
   printf("short = %d\n", sizeof(short));
   printf("double = %d\n", sizeof(double ));
   printf("long double = %d\n", sizeof(long double));
   printf("long long = %d\n", sizeof(long long));

   int radius = 0;
   printf("size of radius = %d\n", sizeof(radius));
   radius = 12345;
   printf("size of radius = %d\n", sizeof(radius));
   radius = 123456789;
   printf("size of radius = %d\n", sizeof(radius));

    return 0;
}