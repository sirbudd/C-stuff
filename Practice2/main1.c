#include <stdio.h>
#include <stdio.h>
#include <string.h>

//reverse string

int main()
{
    char text1[100] = "Reverse String Civic";
    printf(text1);
    printf("\n");
    for(int i = 100; i >= 0; i--)
    {
        printf("%c",text1[i]);
    }
    printf("\n");

    return 0;
}