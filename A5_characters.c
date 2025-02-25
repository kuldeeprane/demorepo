#include<stdio.h>

int main(){
    printf("Enter character string\n");
    char str[100];
    scanf("%s", str);
    printf("You entered: %s", str);
    int lower=0, upper=0, special=0, digit=0;
   for(int i=0; str[i]!='\0'; i++){
      
        if(str[i]>='a' && str[i]<='z'){
            lower++;
        }else if(str[i]>='A' && str[i]<='Z'){
            upper++;
        }else if(str[i]>='0' && str[i]<='9'){
            digit++;                                            
        }else{
            special++;
        }
        
    }

    printf("\nLowercase: %d\nUppercase: %d\nDigits: %d\nSpecial characters: %d", lower, upper, special, digit);
    return 0;
}