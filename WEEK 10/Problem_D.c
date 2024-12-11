#include <stdio.h>
#include <string.h>
#include <ctype.h>

void whitespace(char *input, char *output) {
    int i = 0, j = 0;
    int in_space = 0;

    while (input[i] == ' ') {
        i++;
    }

    while (input[i] != '\0') {
        if (input[i] != ' ') {
            output[j++] = input[i];
            in_space = 0; 
        } else if (!in_space) {
            output[j++] = ' ';
            in_space = 1; 
        }
        i++;
    }

    if (j > 0 && output[j - 1] == ' ') {
        j--;
    }

    output[j] = '\0'; 
}

int main() {
    int T;
    scanf("%d\n", &T); 

    for (int t = 1; t <= T; t++) {
        char input[513]; 
        char output[513];

        fgets(input, sizeof(input), stdin); 
        input[strcspn(input, "\n")] = 0; 
        
        whitespace(input, output); 

        printf("Case #%d: %s\n", t, output);
    }

    return 0;
}