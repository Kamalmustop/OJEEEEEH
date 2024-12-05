#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        
        long long int a = 1, b = 1;
        long long int next;
        
        for (int i = 0; i < N; i++) {
            if (i == 0) {
                printf("%lld", a);
            } else if (i == 1) {
                printf("%lld", b);
            } else {
                next = a + b;
                printf("%lld", next);
                a = b; 
                b = next;
            }
            
            if (i < N - 1) {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}