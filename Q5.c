#include<stdio.h>

struct registration_form{ char name[40]; 
		 int age; 
		 char gender;
		 char city[40];
		 int pincode;
		 char marital_status;
		 int annual_salary;
	       };
	       
void form(struct registration_form user);

void main()
{
	struct registration_form user;
	printf("Please Fill below Details: \n");
	printf("Enter Name: ");
	scanf("%s",&user.name);
	printf("Enter Age: ");
	scanf("%d",&user.age);
	getchar();
	printf("Enter Gender (M/F): ");
	scanf("%c",&user.gender);
	printf("Enter City: ");
	scanf("%s",&user.city);
	printf("Enter pincode: ");
	scanf("%d",&user.pincode);
	getchar();
	printf("Enter Marital Status (Married - M / Unmarried - U): ");
	scanf("%c",&user.marital_status);
	printf("Enter Annual Salary: ");
	scanf("%d",&user.annual_salary);
	
	
	form(user);

}

void form(struct registration_form user)
{
	printf("Please Check the Details filled in Form");
	printf("\n");
	printf(" Name = %s\n Age = %d\n Gender = %c\n City = %s\n Pincode = %d\n Marital Status = %c\n Annual Salary = %d\n", user.name, user.age, user.gender, user.city, user.pincode, user.marital_status, user.annual_salary);

}
