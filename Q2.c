#include<stdio.h>

struct area_of_rectangle{ float length; 
		 	 float height; 
		 	 float area;
			};

void main()
{
	struct area_of_rectangle area;
	
	printf("Enter the value of length: ");
	scanf("%f",&area.length);
	printf("Enter the value of height: ");
	scanf("%f",&area.height);
	
	area.area = area.length * area.height;
	
	printf("length = %f height = %f area = %f\n", area.length, area.height, area.area);
}
