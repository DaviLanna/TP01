#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool VerificaPalindromo(char string[]){
    int tamanho = 0;
    while (string[tamanho] != '\0')
    {
        tamanho++;
    }
    for (int i = 0; i < tamanho / 2; i++)
    {
        if (string[i] != string[tamanho - i - 1])
        {
            return false;
        }
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