/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int tab[30], nbr=0;

int rechercher(int r)
{
    int Deb = 0;
    int Fin = nbr-1;
    while (Deb!=Fin)
    {
        if(tab[Deb]==r)
            return Deb;
        else if (tab[Fin]==r)
            return Fin;
        else if(tab[(Deb+Fin)/2]<r)
            Deb = (Deb+Fin)/2;
        else 
            Fin = (Deb+Fin)/2;
    }
    return -1;
}

int main()
{
   int i, r;
 
   printf(" Entrez le nombre des éléments dans le tableau : ");
   scanf("%d", &nbr);
 
   printf(" Entrez les éléments du tableau : \n");
   for (i = 0; i < nbr; i++) {
       printf("Donner le %d element : ",i);
      scanf("%d", &tab[i]);
   }
 
   printf(" Entrez l'élément à rechercher: ");
   scanf("%d", &r);

    printf("Résultat recherche : %d",rechercher(r));
        

    return 0;
}
