#include<stdio.h>
#include<string.h>

int main(){
    char nameOfStudent[10][50];
     printf("Enter name of student or press 0 to exit\n");
    for(int i=0; i<10; i++){
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]s", nameOfStudent[i]);
        if(nameOfStudent[i][0]=='0'){
            nameOfStudent[i][0]='\0';
            break;
        }
    }

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(nameOfStudent[j][0]=='\0'){
                break;
            }
            if(strcmp(nameOfStudent[i], nameOfStudent[j])>0){
                char temp[50];
                strcpy(temp, nameOfStudent[i]);
                strcpy(nameOfStudent[i], nameOfStudent[j]);
                strcpy(nameOfStudent[j], temp);
            }
        }
    }

    for(int i=0; i<10; i++){
        if(nameOfStudent[i][0]=='\0'){
            break;
        }
        printf("%s\n", nameOfStudent[i]);
    }
}