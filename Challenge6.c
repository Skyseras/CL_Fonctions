#include <unistd.h>
#include <stdio.h>

/*
Challenge 6 :
Écrivez un programme en C pour trier une liste d'éléments 
à l'aide de l'algorithme de tri à bulles (bubble sort).
*/

int main()
{
  int o, array[100], n, c;

  printf("Entrez le nombre des elements de votre liste :\n");
  scanf("%d", &n);
  printf("Choisissez l'ordre :\n1. Ordre croissant.\n2. Ordre decroissant.\n");
  scanf("%d", &o);
  printf("Entrez les %d nombres\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  
  switch (o)
  {
  case 1:
    tribulles1(array, n);
    printf("Votre liste est triee en ordre croissant:\n");

      break;
  case 2:
    tribulles2(array, n);
    printf("Votre liste est triee en ordre decroissant:\n");

      break;
  default:
    printf("Erreur de choix. repetez des le debut.");
      break;
  }

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);
  return 0;
}

void tribulles1(int list[], int n)
{
  int c, d, t;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (list[d] > list[d+1]) {
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}

void tribulles2(int list[], int n)
{
  int c, d, t;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (list[d] < list[d+1]) { // signe d'ordre de tri
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}