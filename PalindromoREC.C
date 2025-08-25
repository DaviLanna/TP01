#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool VerificaPalindromo(char string[]) {
    int i = 0, j;
    while (string[i] != '\0') i++;
    j = i - 1;
    int esq = 0, dir = j;
    while (esq < dir) {
        while (esq < dir && !isalpha(string[esq])) esq++;
        while (esq < dir && !isalpha(string[dir])) dir--;
        if (string[esq] != string[dir]) return false;
        esq++;
        dir--;
    }
    return true;
}

int main(){
    char string[100];
    scanf("%s", string);
    while (!(string[0] == 'F' && string[1] == 'I' && string[2] == 'M' && string[3] == '\0')){
        if (VerificaPalindromo(string) == false)
        {
            printf("NAO\n");
        }
        else
        {
            printf("SIM\n");
        }
        scanf("%s", string);
    }
    return 0;
}