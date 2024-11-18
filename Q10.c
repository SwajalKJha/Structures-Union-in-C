#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    char *name;
    int age;
    char gender[10];
    char *city;
    char pinCode[10];
    char maritalStatus[10];
    float annualSalary;
};
void inputStudentData(struct Student *student, int studentNumber);
void displayStudentData(struct Student student, int studentNumber);

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = malloc(n * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (int i = 0; i < n; i++)
    {
        inputStudentData(&students[i], i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        displayStudentData(students[i], i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        free(students[i].name);
        free(students[i].city);
    }
    free(students);
    return 0;
}

void inputStudentData(struct Student *student, int studentNumber)
{
    printf("==== Student %d data input =====\n", studentNumber);
    
    student->name = (char *)malloc(50 * sizeof(char));
    if (student->name == NULL) {
        printf("Memory allocation failed for name!\n");
        exit(1);
    }
    printf("Enter Name: ");
    scanf(" %[^\n]s", student->name);

    printf("Enter Age: ");
    scanf("%d", &student->age);
    
    printf("Enter Gender: ");
    scanf(" %[^\n]s", student->gender);
    
    student->city = (char *)malloc(50 * sizeof(char));
    if (student->city == NULL)
    {
        printf("Memory allocation failed for city!\n");
        exit(1);
    }
    printf("Enter City: ");
    scanf(" %[^\n]s", student->city);
    
    printf("Enter Pin Code: ");
    scanf(" %[^\n]s", student->pinCode);
    
    printf("Enter Marital Status: ");
    scanf(" %[^\n]s", student->maritalStatus);
    
    printf("Enter Annual Salary: ");
    scanf("%f", &student->annualSalary);
}

void displayStudentData(struct Student student, int studentNumber)
{
    printf("\n==== Student %d data output =====\n", studentNumber);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Gender: %s\n", student.gender);
    printf("City: %s\n", student.city);
    printf("Pin Code: %s\n", student.pinCode);
    printf("Marital Status: %s\n", student.maritalStatus);
    printf("Annual Salary: %.2f\n", student.annualSalary);
}
