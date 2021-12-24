#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Height, Land, Area;
    printf("Please Enter Height and Land length of Triangle = ");
    scanf("%f%f", &Height, &Land);
    Area=(Height*Land)/2;
    printf("Triangle Area is = %.3f", Area);
    getch();
    return 0;
}
