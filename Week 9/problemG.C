#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    int case_number = 1;

    while (T--) {
        int N;
        scanf("%d", &N);

        if (N < 2) {
            printf("Case #%d: Not enough values\n", case_number++);
            continue;
        }

        int max1 = INT_MIN, max2 = INT_MIN;

        for (int i = 0; i < N; i++) {
            int coin_value;
            scanf("%d", &coin_value);

            if (coin_value > max1) {
                max2 = max1;
                max1 = coin_value;
            } else if (coin_value > max2) {
                max2 = coin_value;
            }
        }

        printf("Case #%d: %d\n", case_number++, max1 + max2);
    }

    return 0;
}

