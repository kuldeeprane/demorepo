#include<stdio.h>

struct Student
{
    char rollno[10];
    char name[50];
    float marks;
};

void readStudent(struct Student *s){
    printf("Enter roll number: ");
    scanf("%s", s->rollno);
    printf("Enter name: ");
    //fgets(s->name, 50, stdin);
    scanf(" %[^\n]s", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void printStudent(struct Student *s){
    printf("Roll number: %s\n", s->rollno);
    printf("Name: %s\n", s->name);
    printf("Marks: %f\n", s->marks);
}

int main(){
    struct Student s;
    readStudent(&s);
    printf("************************************\n");
    printStudent(&s);
}
