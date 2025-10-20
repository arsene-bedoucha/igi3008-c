#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int mini(int t[], int size) 
{
    int i = 1;
    int min = t[0];
    while (i < size) 
    {
        if (t[i] < min) 
        {
            min = t[i];
        }
        i++;                    
    }

    printf(" - Valeur minimale : %d\n", min);
    return min;
}

int imini(int t[], int size)
{
    int i = 1;
    int min = t[0];
    int imin = 0;
    while (i < size) 
    {
        if (t[i] < min) 
        {
            min = t[i];
            imin = i;
        }
        i++;                    
    }

    printf(" - Indince valeur minimale : %d\n", imin);
    return imin;
}

int maxi(int t[], int size) 
{
    int i = 1;
    int max = t[0];
    while (i < size) 
    {
        if (t[i] > max) 
        {
            max = t[i];
        }
        i++;                    
    }

    printf(" - Valeur maximale : %d\n", max);
    return max;
}

int imaxi(int t[], int size)
{
    int i = 1;
    int max = t[0];
    int imax = 0;
    while (i < size) 
    {
        if (t[i] > max) 
        {
            max = t[i];
            imax = i;
        }
        i++;                    
    }

    printf(" - Indince valeur maximale : %d\n", imax);
    return imax;
}

int somme(int t[], int size) 
{
    int i = 0;
    int sum = 0;
    while (i < size) 
    {
        sum = sum + t[i];
        i++;                    
    }

    printf(" - Somme des valeurs du tableau : %d\n", sum);
    return sum;
}

int moyenne(int t[], int size) 
{
    int i = 0;
    double moy = 0;
    while (i < size) 
    {
        moy = moy + t[i];
        i++;                    
    }

    moy = moy / size;
    printf(" - Moyenne des valeurs du tableau : %f\n", moy);
    return moy;
}

int compte(int t[], int size, int lowest, int highest)
{
    int i = 0;
    int numb = 0;
    while (i < size) 
    {
        if (t[i] <= highest && t[i] >= lowest)
        {
            numb = numb +1;
        }
        i++;                    
    }

    printf(" - Nombre de valeurs entre %d et %d : %d\n", lowest, highest, numb);
    return numb;
}

int croissante(int t[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        if (t[i] > t[i + 1]) {
            return false;
        }
    }
    return true;
}

int decroissante(int t[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        if (t[i] < t[i + 1]) {
            return false;
        }
    }
    return true;
}

int est_trie(int t[], int size) 
{
    int trie = 0;

    if (croissante(t, size)) 
    {
        trie = 1;
    }
    else if (decroissante(t, size)) 
    {
        trie = -1;
    }

    printf(" - Est trié ? : %d\n", trie);
    return trie;
}
