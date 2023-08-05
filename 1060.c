#include<stdio.h>
int main()
{
    int i,cnt;
    double x;
    
    i = 1;
    cnt = 0;
    while(i<=6)
    {
        scanf("%lf",&x);
        if(x > 0)
        {
            cnt++;
        }
        i++;
    }

    printf("%d valores positivos\n",cnt);

    return 0;
}

