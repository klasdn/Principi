#include <stdio.h>

#include <stdlib.h>

int main(void)

{
 double rate=20, hours, gross;
 printf("Enter number hours provided:");
 scanf("%lf", &hours);
 
 gross = hours * rate;
 printf("Gross pay of Cruz is: %.2lf", gross);
}