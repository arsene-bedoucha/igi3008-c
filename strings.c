#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int exo1(){
    char s1[100];

    printf("Entrez une chaine de caractères : \n");
    fgets(s1, 100, stdin);
    printf("La chaine de caractères récupérée dans s : %s\n", s1);
    printf("composée de %ld caractères lus au clavier\n", strlen(s1));
    for (int i=0 ; s1[i]!='\0' ; i++)
        printf("Caractère %2d : %c\n", i, s1[i]);

    return 0;
}

int exo2(){
    char s2[100];

    printf("Entrez un nombre : \n");
    fgets(s2, 100, stdin);
    int nb = atoi(s2);
    printf("Après conversion : %d\n", nb);
    int nb2 = nb*nb;
    printf("Après mise au carré : %d\n", nb2);

    return 0;
}

int main(){
    printf("Etude sur un mot : \n");
    exo1();

    printf("Etude sur un nombre :\n");
    exo2();

    return 0;
}
