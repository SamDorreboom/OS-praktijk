#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)

{

    typedef struct
    {
        char* emp_name;
        int emp_id;
    } Employees;

    int num=2,i;
    Employees* employeesData = malloc(num * sizeof *employeesData);

    for (i = 0; i < num; i++)
    {
        employeesData[i].emp_name=(char*)malloc(sizeof(char*));
       
        printf("Enter employee name :");
        scanf("%s",employeesData[i].emp_name);

        printf("Enter employee id  :");
        scanf("%d",&employeesData[i].emp_id);

    }
    printf("Please Enter All the Names of Maximum 8 Character \n");
    for (i = 0; i < num; i++)

        printf("Employee Name: %s, Employees Id: %d\n",employeesData[i].emp_name,employeesData[i].emp_id);
    free(employeesData);
    return (0);}