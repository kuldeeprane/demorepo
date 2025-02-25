#include<stdio.h>

int binary(int n, int place) {
    if (n == 0) {
        return 0;
    } else {
        int rem = n % 2;
        return rem * place + binary(n / 2, place * 10);
    }
}

int octal(int n, int place){
    if(n==0){
        return 0;
    }else{
        int rem = n%8;
        return rem*place+ octal(n/8, place*10);
    }
}

void hexa(int n, char* hex, int* x) {
    if (n == 0) {
        hex[*x] = '\0';
        return;
    } else {
        int rem = n % 16;
        if (rem < 10) {
            hex[*x] = rem + '0';
        } else {
            hex[*x] = rem - 10 + 'A';
        }
        *x = *x + 1;
        hexa(n / 16, hex, x);
    }
}


int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    int bin = binary(n, 1);
    printf("Binary equivalent: %d\n", bin);

    int oct = octal(n, 1);
    printf("Octal equivalent: %d\n", oct);

    char hex[100];
    int i=0;
    hexa(n, hex, &i);
    printf("Hexadecimal equivalent: ");
    for(int j=i-1; j>=0; j--){
        printf("%c", hex[j]);
    }
}