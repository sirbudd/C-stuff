#include <stdio.h>
#include <stdlib.h>

//Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. 
//Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.

void update(int *a,int *b) {
    int c = *a + *b;
    int d = *a - *b;
    *a = c;
    *b = abs(d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}