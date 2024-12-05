#include <stdio.h>

int main() {
    int A, B;

    for (int i = 0; i < 3; i++) {
        // Read two integers A and B
        scanf("%d %d", &A, &B);

        // Perform the bitshift operation
        int output = ((A / B) << B);

        // Print the result
        printf("%d\n", output);
    }

    return 0;
}