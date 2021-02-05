#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//matrice care scade val cu cate 1 pe masura ce "coboram" in ea

int main() 
{

    int n;
    int min = 0;
    scanf("%d", &n);
    
    int length = (2*n) - 1; // latura este egala cu 2*n - 1
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            min = i<j ? i:j; //verificam daca nr de linii este mai mic decat nr col.
            min = min < length - i ? min:length-i-1;
            min = min < length - j ? min:length-j-1;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}