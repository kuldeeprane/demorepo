#include <stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int fact = 1;
    while(n>0){
        fact *=n;
        n--;
    }
    printf("Factorial is : %d\n", fact);
    return 0;
}