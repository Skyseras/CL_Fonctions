#include <unistd.h>
#include <stdio.h>

/*
Challenge 1 :
Créez une fonction add(int a , int b) qui permet 
de faire l'addition des deux nombres a et b.
*/

int main(){
    int a , b;
    printf("Entrez deux nombres a et b : ");
    scanf("%d%d", &a, &b);
    printf("a + b = %d", addition(a,b));
    return 0;
}

int resultat;

int addition(int a,int b){
    resultat = a + b;
    return resultat;
}