#include <stdio.h>
 
int main() {
    int i,N;
    i = 1;
    scanf("%d",&N);
    while(i<=10)
    {
         printf("%d x %d = %d\n",i, N,i * N);
         i++;
    }
    return 0;
}
