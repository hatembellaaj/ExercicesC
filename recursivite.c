/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int factorielle(int r)
{
    if(r==0)
        return 1;
    else
        return r * factorielle(r-1);
}

int main()
{
   int n;
 
   printf(" Entrez un entier: ");
   scanf("%d", &n);

    printf("%d ! = %d",n,factorielle(n));
        

    return 0;
}
