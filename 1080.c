#include <stdio.h>
 
int main() {
    int i,n,max,pos,x;
    i = 1;
    n =100;
    max =1;
    pos = -1;
    while(i<=n)
    {
        scanf("%d",&x)
        if(x > max)
        {
            max = x;
            pos = i;
        }
        i++;
    }
    printf("%d\n",max);
     printf("%d\n",pos);
    
    return 0;
}
