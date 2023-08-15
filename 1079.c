#include <stdio.h>

int main() {
    int i,n;
    i = 1;
    double a,b,c,avg;
    avg = 0;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%lf",&a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        avg = ((a*2)+(b*3)+(c*5))/(2+3+5);

        i++;
printf("%.1lf\n",avg);
    }

    return 0;
}
