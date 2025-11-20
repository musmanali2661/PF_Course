#include <stdio.h>



float calc_avg(int nList[7])
{
    int sum = 0;
    for(int i=0;i<7;i++)
        sum = sum + nList[i];

    float res = (float)sum / 7;
    return res;
}

int main()
{
    int listNums[7] = {8,8,8,8,8,7,8};
    float A = calc_avg(listNums);
    printf("%f\n",A);


    return 0;
}