#include <stdio.h>

int main() {
    int i,x;
    i = 0;
    scanf("%d",&x);
    while(i <= 10000)
    {
      if(i%x == 2)
      {
    printf("%d\n",i);
      }

       i++;
    }
    return 0;
}
