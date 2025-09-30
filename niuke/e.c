#include<stdio.h>
int a;
int main()
{
    a=10;
    a=a*16+11;
    a=a*16+12;
    a=a*16+13;
    a=a*16+14;
    a=a*16+15;
    printf("%15d",a);
}