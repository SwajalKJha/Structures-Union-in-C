#include<stdio.h>

struct area_of_rectangle{ float length; 
		 	 float height; 
		 	 float area;
			};

void main()
{	
	//with loop
	int n;
	printf("Enter the number of rectangles: ");
	scanf("%d",&n);
	printf("\n");
	
	struct area_of_rectangle area[n];
	
	for(int i = 0; i < n; i++)
	{	
		printf("Rectangle number %d\n", i+1);
		printf("Enter the value of length: ");
		scanf("%f",&area[i].length);
		printf("Enter the value of height: ");
		scanf("%f",&area[i].height);
		
		area[i].area = area[i].length * area[i].height;
		
		printf("length = %f height = %f area = %f\n", area[i].length, area[i].height, area[i].area);
		printf("\n");
	}
	
	//without loop
	//struct area_of_rectangle area[3];
		
	//printf("Rectangle number 1");
	//printf("\n");
	//printf("Enter the value of length: ");
	//scanf("%f",&area[0].length);
	//printf("Enter the value of height: ");
	//scanf("%f",&area[0].height);
	
	//area[0].area = area[0].length * area[0].height;
	
	//printf("length = %f height = %f area = %f\n", area[0].length, area[0].height, area[0].area);
	//printf("\n");
	
	//printf("Rectangle number 2");
	//printf("\n");
	//printf("Enter the value of length: ");
	//scanf("%f",&area[1].length);
	//printf("Enter the value of height: ");
	//scanf("%f",&area[1].height);
	
	//area[1].area = area[1].length * area[1].height;
	
	//printf("length = %f height = %f area = %f\n", area[1].length, area[1].height, area[1].area);
	//printf("\n");
	
	//printf("Rectangle number 3");
	//printf("\n");
	//printf("Enter the value of length: ");
	//scanf("%f",&area[2].length);
	//printf("Enter the value of height: ");
	//scanf("%f",&area[2].height);
	
	//area[2].area = area[2].length * area[2].height;
	
	//printf("length = %f height = %f area = %f\n", area[2].length, area[2].height, area[2].area);
	//printf("\n");
	
}
