#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	for (int i = n; i > 0; i--){
          for (int j = n; j > 0;j--)
          {
              printf("%d",i);
          }
          printf("\n");
      }
    return 0;
}
