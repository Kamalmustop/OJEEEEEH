#include <stdio.h>

int main(void){

float x, y, z;

scanf("%f %f", &x, &y);
z = (x/y) * 100;

printf("%.2f%%\n", z);


    return 0;
}