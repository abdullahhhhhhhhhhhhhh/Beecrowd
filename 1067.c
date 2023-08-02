#include<stdio.h>
int main()
{
    int i,x;
    i = 1;
    scanf("%d",&x);
    while(i>=1 && i<=x)
    {
        if(i%2 != 0)
        {
              printf("%d\n",i);
        }

        i++;

    }
    return 0;
}
