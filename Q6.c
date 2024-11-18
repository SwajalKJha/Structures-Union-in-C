#include <stdio.h>

struct registration_form {
    char name[40];
    int age;
    char gender;
    char city[40];
    int pincode;
    char marital_status;
    int annual_salary;
};

void form(struct registration_form user);
void modify_user(struct registration_form *user);

int main() {
    struct registration_form user;

    printf("Please Fill below Details: \n");
    printf("-------------------------------------------------------\n");
    printf("Enter Name: ");
    scanf("%39s", user.name);
    printf("Enter Age: ");
    scanf("%d", &user.age);
    printf("Enter Gender (M/F): ");
    scanf(" %c", &user.gender); // Note the space before %c
    printf("Enter City: ");
    scanf("%39s", user.city);
    printf("Enter pincode: ");
    scanf("%d", &user.pincode);
    printf("Enter Marital Status (Married - M / Unmarried - U): ");
    scanf(" %c", &user.marital_status); // Note the space before %c
    printf("Enter Annual Salary: ");
    scanf("%d", &user.annual_salary);

    form(user);
    printf("-------------------------------------------------------\n");
    modify_user(&user);
    printf("-------------------------------------------------------\n");
    form(user);

    return 0;
}

void form(struct registration_form user) {
    printf("Please Check the Details filled in Form\n");
    printf(" Name = %s\n Age = %d\n Gender = %c\n City = %s\n Pincode = %d\n Marital Status = %c\n Annual Salary = %d\n",
           user.name, user.age, user.gender, user.city, user.pincode, user.marital_status, user.annual_salary);
}

void modify_user(struct registration_form *user) {
    int num;
    printf("Do you want to modify anything from the following: \n");
    printf(" 1. Age\n 2. City\n 3. Pincode\n 4. Annual Salary\n");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Enter Age: ");
            scanf("%d", &user->age);
            break;

        case 2:
            printf("Enter City: ");
            scanf("%39s", user->city);
            break;

        case 3:
            printf("Enter Pincode: ");
            scanf("%d", &user->pincode);
            break;

        case 4:
            printf("Enter Annual Salary: ");
            scanf("%d", &user->annual_salary);
            break;

        default:
            printf("Invalid option\n");
            break;
    }
}

