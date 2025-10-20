#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int t[100]; 
    int n = 50;         
    int size = 10;       

    for (int i = 0; i < size; i++) 
    {
        t[i] = rand() %n;
        printf("%d ", t[i]);
    }
    
    int lowest = 36;
    int highest = 43;

    printf("\n");
    mini(t, size);
    imini(t, size);
    maxi(t, size);
    imaxi(t, size);
    somme(t, size);
    moyenne(t, size);
    compte(t, size, lowest, highest);
    est_trie(t, size);
    return 0;
}