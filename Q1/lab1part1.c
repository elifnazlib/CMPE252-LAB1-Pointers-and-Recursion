#include <stdio.h>

int takePow(int numArg, int pArg, int returnVal)
{
    if (pArg == 0)
        return returnVal;
    else {
        return numArg * takePow(numArg, pArg-1, returnVal);
    }
}

int main()
{
    int num;
    int p;

    printf("Enter number> ");
    scanf("%d", &num);
    printf("Enter power> ");
    scanf("%d", &p);
    int ans = takePow(num, p,1);
    printf("%d Power of: %d is %d",p, num,ans);
    return 0;
}
