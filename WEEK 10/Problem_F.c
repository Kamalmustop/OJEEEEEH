#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void sortDescending(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] < str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char S[256], W[256];
    

    fgets(S, sizeof(S), stdin);
    scanf("%s", W);


    char sortedW[256];
    strcpy(sortedW, W);
    sortDescending(sortedW);


    char *ptr = S;
    while ((ptr = strstr(ptr, W)) != NULL) {

        strncpy(ptr, sortedW, strlen(W));
        ptr += strlen(W);
    }


    printf("%s\n", S);

    return 0;
}
