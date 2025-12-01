#include <stdio.h>

float CalcAvg2(float v1, float v2)
{
    float res = (v1 + v2) / 2;
    return res;
}


float CalcAvg3(float v1, float v2, float v3)
{
    float res = (v1 + v2 + v3) / 3;
    return res;
}

int increment(int* v){
    *v = *v + 1;
    return *v;
}
int main(){

    int val = 5;
    int res = 0;         
    
    increment(&val);

    val++;
    

    printf("val = %d\n",val);
    printf("res = %d\n",res);

    return 0;
}