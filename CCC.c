#include <stdio.h>

#include <stdlib.h>

int main(void)

{
 double dihram = 15.43, pesos;
 printf("Enter amount of UAE Dihram:");
 scanf("%lf", &dihram);
 
 pesos = dihram * 15.43;
 printf("Equivalent amount of Pesos is: %.2lf", pesos);
}