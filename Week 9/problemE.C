#include <stdio.h>
#include <string.h>

int main() {
    int S, Z;
    scanf("%d", &S);
    scanf("%d", &Z);

    char *spell_names[] = {
        "Accio",
        "Bombarda Maxima",
        "Incendio",
        "Lumos",
        "Expecto Patrounum"
    };

    for (int i = 0; i < Z; i++) {
        char spell_code[5]; 
        int difficulty;
        scanf("%s %d", spell_code, &difficulty);

        if (difficulty <= S) {
            if (strcmp(spell_code, "AAA") == 0) {
                printf("%s\n", spell_names[0]);
            } else if (strcmp(spell_code, "BBB") == 0) {
                printf("%s\n", spell_names[1]);
            } else if (strcmp(spell_code, "CCC") == 0) {
                printf("%s\n", spell_names[2]);
            } else if (strcmp(spell_code, "LLL") == 0) {
                printf("%s\n", spell_names[3]);
            } else if (strcmp(spell_code, "EEE") == 0) {
                printf("%s\n", spell_names[4]);
            }
        }
    }

    return 0;
}

