#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Employee {
    char Name[50];
    char Position[50];
    int Salary;
} Employee;

void setEmployee(char n[], char p[], int sal, Employee *e) {
    strcpy(e->Name, n);
    strcpy(e->Position,p);
    e->Salary = sal;
}

void showInfo(Employee e) {
    printf("Name: %s\n", e.Name);
    printf("Position: %s\n", e.Position);
    printf("Salary: %d\n", e.Salary);
}


int main () {
    int numOfEmployee;
    scanf("%d", &numOfEmployee);

    Employee *e;
    e = (Employee *) malloc(numOfEmployee * sizeof(Employee));

    char n[100], p[100];
    int sal;
    for (int i = 0; i < numOfEmployee; i++) {
        scanf("%s%s%d", n, p, &sal);
        setEmployee(n, p, sal, e+i);
    }

    for (int i = 0; i < numOfEmployee; i++) {
        showInfo(e[i]);
    }

    free(e);

    return 0;
}