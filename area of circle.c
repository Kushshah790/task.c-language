#include<stdio.h>
int main()
{
	float radius, area;
	printf("Enter radius value of circle:");
	scanf("%f",&radius);
	area = 3.14*(radius*radius);
	printf("Area of circle = %.2f sq. units", area);
}