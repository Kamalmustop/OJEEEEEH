#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char a[101];
    char c[101];
    int b;
    int d;
    double e;
    double f;
    
    scanf("%s", a);
    scanf("%lf", &e);
    scanf("%d", &b);
    scanf("%s", c);
    scanf("%lf", &f);
    scanf("%d", &d);
    
    printf("Name 1: %s\n", a);
    printf("Height 1: %.2lf\n", e);
    printf("Age 1: %d\n", b);
    printf("Name 2: %s\n", c);
    printf("Height 2: %.2lf\n", f);
    printf("Age 2: %d\n", d);
    return 0;
}