#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    int m=n;
    int rem=0, place=1, bin=0;
    while(n>0){
        rem=n%2;
        bin=bin+rem*place;
        place*=10;
        n/=2;
    }
    printf("Binary equivalent: %d\n", bin);

    n=m;
    int oct=0, place1=1, rem1=0;
    while(n>0){
        rem1=n%8;
        oct=oct+rem1*place1;
        place1*=10;
        n/=8;
    }
    printf("Octal equivalent: %d\n", oct);

    int place2=1, rem2=0, i=0;
    char hex[100];
    n=m;
    while(n>0){
        rem2=n%16;
        if(rem2<10){
            hex[i++]=rem2+48;
        }else{
            hex[i++]=rem2+55;
        }
        n/=16;
    }
    printf("Hexadecimal equivalent: ");
    for(int j=i-1; j>=0; j--){
        printf("%c", hex[j]);
    }

    return 0;
}