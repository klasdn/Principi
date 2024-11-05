#include <stdio.h>

#include <stdlib.h>

int main(void)

{
 float length, width, area, perimeter;
 printf("Enter length:");
 scanf("%f", &length);
 printf("Enter width:");
 scanf("%f", &width);
 
 area = length * width;
 perimeter = 2 * (length + width);
 printf("\nThe area of a rectangle is: %.2f", area);
 printf("\nThe perimeter of a rectangle is: %.2f", perimeter);
}