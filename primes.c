#include <stdio.h>
#include <math.h>

int isprime(int p) {
    if (p < 2) return 0;
    for (int i = 2; i <= (int)sqrt(p); i++) {
        if (p % i == 0) {
            return 0;  // pas premier
        }
    }
    return 1;  // premier
}

int main() {
    int p;
    printf("Entrez un nombre entier : ");
    scanf("%d", &p);

    int i, count = 0;
    for (i = 2; i < p; i++) {
        if (isprime(i)) {
            count++;
        }
    }

    printf("Il y a %d nombres premiers strictement inférieurs à %d.\n", count, p);
    return 0;
}
