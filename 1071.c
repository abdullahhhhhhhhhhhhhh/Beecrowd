#include <stdio.h>
int main()
{
    int i,m,n,sum;
    i = n;
    sum = 0;
    scanf("%d%d",&m,&n);
    while(i <=m)
    {
        if(i<m && i>n && i%2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
