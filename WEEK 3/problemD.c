#include <stdio.h>

int main() {
    int T; 
    int A, B, C, D; 

    
    scanf("%d", &T);

   
    for (int i = 1; i <= T; i++) {
        
        scanf("%d %d", &A, &B); 
        scanf("%d %d", &C, &D); 

     
        printf("Case #%d: ", i);
        if (A > B) {
            printf("Go-Jo\n");
        } else {
            printf("Bi-Pay\n");
        }

        
        printf("Case #%d: ", i + 1);
        if (C > D) {
            printf("Go-Jo\n");
        } else {
            printf("Bi-Pay\n");
        }
    }

    return 0;
}

