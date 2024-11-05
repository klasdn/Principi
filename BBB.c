#include <stdio.h>

#include <stdlib.h>

int main(void)

{
 int n1, n2, product, sum;
 printf("Enter first number:");
 scanf("%d", &n1);
 printf("Enter second number:");
 scanf("%d", &n2);
 
 product = n1 * n2;
 sum = n1 + n2;
 printf("\nThe product is: %d", product);
 printf("\nThe sum is: %d", sum);
}