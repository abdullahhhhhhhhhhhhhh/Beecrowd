#include <stdio.h>

int main() {
    int i,cnt;
    double x,sum,avg;
    i = 1;
    sum = 0;
    cnt  = 0;
    while(i<=6)
    {
        scanf("%lf",&x);
        if(x > 0)
        {
            cnt++;
        }
        if(x > 0)
        {
            sum += x;
        }
        i++;
    }
    avg = sum/cnt;


    printf("%d valores positivos\n",cnt);

    printf("%.1lf\n",avg);


    return 0;
}
