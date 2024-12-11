#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[51];
    int num;
} Data;

int cmp(const void* a, const void* b) {
    const Data *datA = (const Data *)a;
    const Data *datB = (const Data *)b;
    
    if (datB->num > datA->num) return 1;
    if (datB->num < datA->num) return -1;
    return strcmp(datA->name, datB->name);
}

int main() {
    int c = 0;
    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        int n = 0;
        scanf("%d", &n);

        Data *dat = (Data *)malloc(n * sizeof(Data));

        for (int j = 0; j < n; j++) {
            scanf(" %50[^#]#%d", dat[j].name, &dat[j].num);
        }

        qsort(dat, n, sizeof(Data), cmp);

        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            printf("%s - %d\n", dat[j].name, dat[j].num);
        }

        free(dat);
    }

    return 0;
}