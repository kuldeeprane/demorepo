#include<stdio.h>

int main(){
    printf("Fibonacci Series\n");
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int a=0, b=1, next;
    for(int i=0; i<n; i++){

        if(i<=1){
            next=i;
        }else{
            next=a+b;
            a=b;
            b=next;
        }
        printf("%d", next);

    }
    return 0;
}