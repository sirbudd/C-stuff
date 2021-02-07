#include <stdio.h>
#include <stdio.h>
#include <string.h>

//convert to binary

int main()
{
    int binary[50];
    int n;

    printf("N = ");
    scanf("%d",&n);

    int i = 0;
    while(n > 0)
    {
        binary[i] = n%2;
        n = n/2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d ",binary[j]);
    }

    printf("\n");
    return 0;
}