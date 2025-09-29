#include <stdio.h>
#include "max.h"
int main()
{
    int a = 10;
    int b = 20;
    int d;
    int c = findMaxNum(a, b);
    scanf("%d",&d);
    printf("%d\n", c+d*2);
    return 0;
}
