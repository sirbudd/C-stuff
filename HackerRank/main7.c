#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    char *s;
    s = malloc(1024 * sizeof(char));  //am alocat memorie 1024
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1); //realocam memoria ca sa fie cat avem nev, nu mai mult
    
    for(int i = 0; i < strlen(s); i++) //mergem de la inceputul stringului pana la finalul lui
    {
        if(s[i] == ' ') // daca gasim un spatiu acel spatiu devine new line
        {
            s[i] = '\n';
        }
    }
    printf("%s",s);
    printf("/n");
    return 0;
}
