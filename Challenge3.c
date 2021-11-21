#include <unistd.h>
#include <stdio.h>

/*
Challenge 3 :
Créez une fonction bool isPremier() pour vérifier si un nombre 
il est premier ou non (constatez que le type de la fonction est bool,
donc vous devez créez votre type Bool).
*/

int main(){
    int n;
    printf("Entrez un nombre pour le check : ");
    scanf("%d",&n);
    if (is_pr(n))
        printf("Le nombre %d est premier.",n);
    else
        printf("Le nombre %d n est pas premier.",n);
    return 0;
}

int is_pr(int nt){ //nt : nombre de test
    int ndiv=0;     //ndiv : combien le nombre accepte de division
    int nbr=nt;    
    while (nbr)
    {
        if (nt%nbr==0)
            ndiv++;
        nbr--;
    }
    if (ndiv!=2)
        return 0;
    else
        return 1;
}