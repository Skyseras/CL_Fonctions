#include <unistd.h>
#include <stdio.h>

/*
Challenge 2 :
Créez une fonction echanger() pour échanger la valeur 
de a avec la valeur de b, qu'est ce que vous constatez ? 
affichez aussi l'etat initial des variables a et b.
*/

int main(){
    int a, b;
    printf("Entrez deux valeurs a et b : ");
    scanf("%d%d",&a,&b);
    printf("Vous avez entrez a = %d et b = %d\n",a,b);
    echanger(&a,&b);
    printf("On echange les deux valeurs et ca devient a = %d et b = %d",a,b);    
    return 0;
}

void echanger(int *a, int *b){
    int ech;
    ech = *a;
    *a = *b;
    *b = ech;
}