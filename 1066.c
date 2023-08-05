#include <stdio.h>
 
int main() {
    int i,odd,even,pos,neg,x;
    i = 1;
    odd = 0;
    even = 0;
    pos = 0;
    neg = 0;
    while(i<=5)
    {
        scanf("%d",&x);
      
        if(x%2 == 0)
        {
            even++;
        } 
          if(x%2 != 0)
        {
            odd++;
        }
        
          if(x > 0)
        {
            pos++;
        }
        
          if(x < 0)
        {
            neg++;
        }
        i++;
        
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
