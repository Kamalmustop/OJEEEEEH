#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char A, B;
        scanf(" %c%c", &A, &B);

        int posA = A - 'A' + 1;
        int posB = 'Z' - B + 1;

        if (posA == posB) {
            printf("MATCH\n");
        } else {
            printf("NOT MATCH\n");
        }
    }

    return 0;
}

