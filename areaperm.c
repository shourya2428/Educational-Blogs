#include"stdio.h"
void main()

{ int length,breadth,Area,Perimeter;

printf("Enter length: ");

scanf("%d",&length);

printf("Enter breadth: ");

scanf("%d", &breadth);

Area = length * breadth;

Perimeter = 2*(length+breadth);

if(length * breadth > 2*(length+breadth))
{
    printf("Area > Perimeter");
}
else {
    printf("Area < Perimter");
}}
