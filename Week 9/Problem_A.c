#include <stdio.h>
#include <math.h>
#define mod 1000000000


long long pohonlieur(int m, int n) { //M = tinggi pohon, N = node
    if (m == 0) {
        return 0;
    }
    
    
    return (n + ((n - 1) * pohonlieur(m - 1, n - 1)) + (m - 1)) % mod;
}

int main() {
    int c;
    scanf("%d", &c);
    
    for (int i = 0; i < c; i++) {
        int m, n;
        scanf("%d %d", &m, &n);
        long long result = pohonlieur(m, n);
        printf("Case #%d: %lld\n", i + 1, result);
    }
    
    return 0;
}
