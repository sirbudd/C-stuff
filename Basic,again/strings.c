#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Dragos";
    char s2[10] = "salutare";
    char s3[10] = "Daniel";
    char s4[10] = "Dragos";

    printf("Numele este : %s \n",s1);

    printf("Lungimea stringului s1 este : %lu\n",strlen(s1));

    int result = strcmp(s1,s4);
    printf("rezultatul la strcmp este : %d \n",result);

    strcpy(s2,s1);
    printf("Am copiat s1 in s2 : %s\n",s2);

    strcat(s1,s3);
    puts(s1);

}
