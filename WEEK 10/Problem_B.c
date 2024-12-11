#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HEROES 100000
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int damage;
} Hero;


int compareAsc(const void *a, const void *b) {
    Hero *heroA = (Hero *)a;
    Hero *heroB = (Hero *)b;
    return heroA->damage - heroB->damage;
}


int compareDsc(const void *a, const void *b) {
    Hero *heroA = (Hero *)a;
    Hero *heroB = (Hero *)b;
    return heroB->damage - heroA->damage;
}

int main() {
    int T;
    scanf("%d", &T);

    Hero heroes[MAX_HEROES];

    for (int i = 0; i < T; i++) {
        scanf("%s %d", heroes[i].name, &heroes[i].damage);
    }

    char order[4];
    scanf("%s", order);

    if (strcmp(order, "asc") == 0) {
        qsort(heroes, T, sizeof(Hero), compareAsc);
    } else if (strcmp(order, "dsc") == 0) {
        qsort(heroes, T, sizeof(Hero), compareDsc);
    }

    for (int i = 0; i < T; i++) {
        printf("%s %d\n", heroes[i].name, heroes[i].damage);
    }

    return 0;
}
