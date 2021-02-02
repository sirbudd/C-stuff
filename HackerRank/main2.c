#include <stdio.h>

//Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int max = 0;
    if (a > b && a > c && a > d)
    {
        max = a;
        //printf("%d\n",max);
    }
    else if (b > a && b > c && b > d)
    {
        max = b;
        //printf("%d\n",max);
    }
    else if (c > a && c > b && c > d)
    {
        max = c;
        //printf("%d\n",max);
    }
    else
    {
        max = d;
        //printf("%d",max);
    }
    return max;
}