#include<stdio.h>
int main() {
    double a;
    scanf("%lf",&a);
    if(a>=0)
    {
            if((a-(int)a)>=0.5)
    printf("%d",(int)a+1);
    else printf("%d",(int)a);
    }
    else
    {
            if((a-(int)a)>=-0.5)
    printf("%d",(int)a);
    else printf("%d",(int)a-1);
    }
    return 0;
}