#include<stdio.h>
#include "max.h"
double fourTofive(double num)
{
    num*=100.0;
    int te;
    te=findMaxNum(2,3);
    if(num>=0)
    {
        if(num-(int)num>=0.5)
            return ((int)num+1)/100.0;
        else
            return (int)num/100.0;;
    }
    else
    {
        if((int)num-num>=0.5)
            return ((int)num-1)/100.0;
        else
            return (int)num/100.0;
    }
}
int main()
{
    int n;
    double a,b,c;
    n=0;a=0;b=0;c=0;
    scanf("%d; %lf, %lf, %lf",&n,&a,&b,&c);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",n,fourTofive(a),fourTofive(b),fourTofive(c));
    return 0;
}