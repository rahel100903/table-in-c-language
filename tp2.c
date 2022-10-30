#include <stdio.h>
main()
{ int i,j,VAL,N, A[20];
  printf ("Entrez la valeur de VAL\n");
   scanf("%d",&VAL);
//je suppose qu'on a un tableau de dimension n+1 de dimension max est 50 
// saisie de la dimension N correctement du tableau  
   do
   { printf ("Entrez la dimension du tableau N \n");
   scanf("%d",&N);
   }while(N<1||N>=20);
   // saisie des valeurs du tableau A 
   for (i=0;i<N;i++)
       { printf("Entrez A[%d]\n",i);
         scanf("%d",&A[i]);
       }     
   for (i=0;i<N;i++)
       printf("A[%d]=%d\n",i,A[i]);   
    /*version 1*/   
    for (i=0;i<N;i++)
       if (VAL< A[i]) break; 

    if (i==N) A[N]=VAL;
    else 
              {for (j=N;j>i;j--)
                   A[j]=A[j-1];
                   A[i]=VAL;
              }   
   printf("Apres insertion\n");
    for (i=0;i<=N;i++)
       printf("A[%d]=%d\n",i,A[i]) ;
   // Fin 
}