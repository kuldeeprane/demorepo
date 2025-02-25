#include <stdio.h>

char lower(char c){
    if(c>='A' && c<='Z'){
        return c+32;
    }
    return c;
}

int main() {
    char str[1000];
    int count[26] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            count[lower(str[i]) - 'a']++;
        }
    }

    // Print the count of each alphabet
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i + 'A', count[i]);
        }
    }

    return 0;
}