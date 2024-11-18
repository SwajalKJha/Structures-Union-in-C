#include<stdio.h>

struct addition{ int num1; 
		 int num2; 
		 int sum;
	       };

void main()
{
	struct addition s;
	
	printf("Enter the value of num1: ");
	scanf("%d",&s.num1);
	printf("Enter the value of num2: ");
	scanf("%d",&s.num2);
	
	s.sum = s.num1 + s.num2;
	
	printf("num1 = %d num2 = %d sum = %d\n", s.num1, s.num2, s.sum);
	
	
	// Extra Info
	printf("sizeof(s) = %ld\n", sizeof(s));
	printf("&s = %ld\n", &s);
	printf("&s.num1 = %ls\n", &s.num1);
	printf("&s.num2 = %ls\n", &s.num2);
	printf("&s.sum = %ls\n", &s.sum);
}
