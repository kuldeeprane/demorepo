#include <stdio.h>

int main(){
    printf("Percentage\n");
    printf("Enter marks of 5 subjects\n");
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float total = a+b+c+d+e;
    float percentage = (total/500)*100;
    char grade;

    if(percentage>=90){
        grade='Ex';
    }
    else if(percentage>=80 && percentage<90){
        grade = 'A';
    }else if (percentage>=70 && percentage<80)
    {
        grade = 'B';
    }else if (percentage>=60 && percentage<70)
    {
        grade = 'C';
    }else{
        grade='F';
    }

    printf("Percentage: %.2f%%    grade: %c", percentage, grade);
    return 0;
}