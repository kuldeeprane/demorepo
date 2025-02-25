#include<stdio.h>

void reverse(char* str, int i){
   int j=0;
   i--;
   while(j<i){
       char temp = str[j];
       str[j] = str[i];
       str[i] = temp;
       j++;
       i--;
   }
}

int main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]s", str);
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
   
    printf("Reverse of the string: ");
    reverse(str, i);
   for(int j=0; j<=i; j++){
       printf("%c", str[j]);
   }

    printf("\n");
    int j=0;
    while(str[j]!='\0'){
        printf("%c", str[j]);
        j++;
    }
    return 0;
}