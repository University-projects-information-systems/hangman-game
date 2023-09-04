#include <stdio.h>
#include <string.h>

int main(){
    char secretWord[20];
    sprintf(secretWord, "MELANCIA");

    int hit =0;
    int hanged = 0;

    char kicks[26];
    int attempts = 0;

    do {
        for(int i = 0 ; i < strlen(secretWord); i++){
            int right = 0;

            for(int j = 0; j < attempts; j++ ){
                if(kicks[j] == secretWord[i]){
                    hit = 1;
                    break;
                }
            }

            if(hit){
                printf("%c", secretWord[i]);
            }else{
                printf("_ ");
            }
        }
        printf("\n");

        char kick;
        printf("Qual letra? ");
        scanf(" %c", &kick);

        kicks[attempts] = kick;
        attempts++
    }while(!hit && !hanged);
}