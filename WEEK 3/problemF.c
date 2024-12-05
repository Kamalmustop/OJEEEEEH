#include <stdio.h>

int main() {
    int x, y;

    
    scanf("%d %d", &x, &y);

    
    if (x == 0 && y == 0) {
        printf("wrong places\n");
    } else if (x == 0 || y == 0) {
        printf("wrong places\n");
    } else if (x > 0 && y > 0) {
        printf("duck\n");
    } else if (x < 0 && y > 0) {
        printf("sheep\n");
    } else if (x < 0 && y < 0) {
        printf("cow\n");
    } else if (x > 0 && y < 0) {
        printf("dog\n");
    }

    return 0;
}
