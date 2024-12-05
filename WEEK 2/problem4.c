#include <stdio.h>

int main(void){

float x, y, z;

scanf("%f %f", &x, &y);

    z = (y / x) * 100;
    printf("%.4f%%\n", z);

    return 0;
}