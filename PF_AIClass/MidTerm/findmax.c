#include <stdio.h> 


int find_max(int nlist[])
{
    int M = 0;
    for(int n=0;n<6;n++)
        if (nlist[n] > M)
            M = nlist[n];
    return M;
}

int main()
{
    int listNums[6] = {2,6,3,9,8,1};
    int max = find_max(listNums);
    printf("%d\n", max)   

    return 0;
}






