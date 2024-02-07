#include<stdio.h>
int main()
{
	float diameter, radius;
	printf("Enter radius value of circle:");
	scanf("%f",& radius);
	diameter = 2 * radius;
	printf("diameter of circle = %.2f",diameter);
}