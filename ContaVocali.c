#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
void inputstringa(char *a, int max);
int contalettere(char *a);

int main(){
    char stringa[MAX];
    inputstringa(stringa, MAX);
    printf("Ci sono %d vocali", contalettere(stringa));
    return 0;
}

void inputstringa(char *a, int max){
    printf("Inserisci la stringa con massimo %d lettere: ", max);
    gets(a);
}

int contalettere(char *a){
    int vocali, i;
    vocali = 0;
    i = 0;
    for(i = 0; i < strlen(a); i++){
        switch(a[i]){
            case 65:
                vocali++;
                break;
            case 69:
                vocali++;
                break;
            case 73:
                vocali++;
                break;
            case 79:
                vocali++;
                break;
            case 85:
                vocali++;
                break;
            case 97:
                vocali++;
                break;
            case 101:
                vocali++; 
                break;
            case 105:
                vocali++;
                break;
            case 111:
                vocali++;
                break;
            case 117:
                vocali++;
                break;
            default:
                break; 
        }
    }
    return vocali;
}