/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int nbr, i, r, tab[30];
 
   printf(" Entrez le nombre des éléments dans le tableau : ");
   scanf("%d", &nbr);
 
   printf(" Entrez les éléments du tableau : \n");
   for (i = 0; i < nbr; i++) {
       printf("Donner le %d element : ",i);
      scanf("%d", &tab[i]);
   }
 
   printf(" Entrez l'élément à rechercher: ");
   scanf("%d", &r);

    i=0;
    while((i<nbr)&&(tab[i]!=r))
        i++;
    
    if (i==nbr)
        printf("number not found !");
    else
        printf("find number in position : %d ", i);
        

    return 0;
}
