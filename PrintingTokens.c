#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //char s;
    //scanf("%s", &s);
    //printf("%s\n", s);
    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(i=0;i<strlen(s);i++)
        printf("%s\n", s[i]);
    return 0;
}