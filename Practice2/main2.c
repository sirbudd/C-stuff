#include <stdio.h>
#include <stdio.h>
#include <string.h>

//reverse string

int main()
{
    int a[50];
    int n;
    printf("N = ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {   
        printf("Elementul %d = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++)
    {   
        printf("Elementul %d = %d\n",i + 1,a[i]);
    }

    printf("array reversed : \n");

    for(int i = n -1 ; i >= 0; i--)
    {
        printf("Elementul %d = %d\n",i+1,a[i]);
    }

    return 0;
}

