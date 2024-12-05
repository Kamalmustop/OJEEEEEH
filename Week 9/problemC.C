#include <stdio.h>

#define MOD 1000000007
#define MAX_A 100

long long fact[MAX_A + 1];

void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i <= MAX_A; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

int main() {
    int T; 
    scanf("%d", &T);

    precompute_factorials();

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        long long result = 1; 
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            result = (result * fact[num]) % MOD;
        }

        printf("Case #%d: %lld\n", t, result);
    }

    return 0;
}

