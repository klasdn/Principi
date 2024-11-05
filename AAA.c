#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int n1, n2, difference;
 printf("Enter first number:");
 scanf("%d", &n1);
 printf("Enter second number:");
 scanf("%d", &n2);
 
 difference = n1 - n2;
 printf("The difference between two numbers is: %d", difference);
}