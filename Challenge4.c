#include <unistd.h>
#include <stdio.h>
#include <math.h>

/*
Challenge 4 :
Créez une fonction divededby(int n,int a) qui retoune la division des deux valeurs.
Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne
true, sinon on retourne false.
*/

int main(){
    int a,b;
    printf("Entrez deux valeurs a et b : ");
    scanf("%d%d",&a,&b);
    if (dividedby(a,b)){
        printf("a / b = %d\n%d est premier.", a/b, a/b);
    }
    else
        printf("a / b = %d\n%d n est pas premier.",a/b, a/b);
    return 0;
}

int dividedby(int a,int b){
    int res;
    res = a / b;
    int ndiv=0;
    int nbr=res;    
    while (nbr)
    {
        if (res%nbr==0)
            ndiv++;
        nbr--;
    }
    if (ndiv!=2)
        return 0;
    else
        return 1;
}