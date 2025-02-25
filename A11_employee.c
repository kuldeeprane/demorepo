#include<stdio.h>

struct employee
{
    /* data */
    char first_name[50];
    char last_name[50];
    double salary;
};

void emp_init(struct employee *e){
    printf("********************************\n");
    printf("Enter first name: ");
    scanf(" %[^\n]s", e->first_name);
    printf("Enter last name: ");
    scanf(" %[^\n]s", e->last_name);
    printf("Enter salary: ");
    scanf("%lf", &e->salary);
}

void set_salary(struct employee *e, double raise){
    double multiplier = (1 + raise/100);
    e->salary = e->salary * multiplier;
    
}

void display_emp(struct employee *e){
    printf("********************************\n");
    printf("First name: %s\n", e->first_name);
    printf("Last name: %s\n", e->last_name);
    printf("Salary: %lf\n", e->salary);
}

int main(){
    struct employee e1;
    struct employee e2;

    emp_init(&e1);
    emp_init(&e2);

    set_salary(&e1, 10);
    set_salary(&e2, 10);

    display_emp(&e1);
    display_emp(&e2);   
}