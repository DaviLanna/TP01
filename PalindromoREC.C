#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool VerificaPalindromoREC(char *string, int inicio, int fim){
    if(inicio >= fim){
        return true;
    }
    if(string[inicio] != string[fim]){
        return false;
    }else{
        return VerificaPalindromoREC(string, inicio + 1, fim - 1);
    }
}

int main(){
    char string[100];
    scanf("%s", string);
    while (!(string[0] == 'F' && string[1] == 'I' && string[2] == 'M' && string[3] == '\0')){
        int len = strlen(string);
        if (VerificaPalindromoREC(string, 0, len - 1) == false)
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