#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system ("chcp 65001");
    char string[1000];
    printf("Введіть англійські слова з пропусками: ");
    gets(string);

    int n, i;
    printf("Введіть довжину слова для визначення кількості: ");
    scanf("%d", &n);

    int length = strlen (string);
    int wordlength = 0;
    int result = 0;
    for(i=0; i<= length; i+=1){
        if(string[i] != '\0' && string[i] != ' '){
            wordlength += 1;
        }
        else{
            if(wordlength == n){
                result+=1;
            }
            wordlength = 0;
        }
    }
    printf("Кількість слів вказаної довжини %d: %d", n, result);

    return 0;
}