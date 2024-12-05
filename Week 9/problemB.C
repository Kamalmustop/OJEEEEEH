#include <stdio.h>

long long memo[26];

long long jobonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;

    if (memo[n] != -1) return memo[n];

    memo[n] = jobonacci(n - 1) + jobonacci(n - 3);
    
    return memo[n];
}

int main() {
    for (int i = 0; i <= 25; i++) {
        memo[i] = -1;
    }

    int N;
    scanf("%d", &N);

    printf("%lld\n", jobonacci(N));

    return 0;
}

