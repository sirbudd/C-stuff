#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int suma = 0;
    while(n > 0)
    {
        int a = n % 10;
        suma = suma + a;
        n = n/10;
    }
    printf("%d\n",suma);
    return 0;
}