#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d %d", &A, &B);

        while (A <= 1000 && B <= 1000 && A != B) {
            A += 4;
            B -= 5;
        }

        if (A == B)
            printf("Case #%d: %d\n", t, A);
        else
            printf("Case #%d: Possiblen't\n", t);
    }

    return 0;
}