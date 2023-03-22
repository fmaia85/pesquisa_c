#include <stdio.h>
#include "busca.h"

int buscaLinear(int vetor[],int tam, int elemento){
    for(int i = 0; i < tam; i++){
        if(vetor[i] == elemento){
            return i;
        }
    }
    return -1;
}

int buscaBinariaInterativa(int vetor[], int tam, int elemento){
    int inicio = 0;
    int fim = tam;
    int pos = (inicio+fim)/2;
    while(inicio != pos){
        if(vetor[pos] == elemento){
            return pos;
        } else if(vetor[pos] < elemento){
            inicio  = pos;
        } else {
            fim = pos;
        }
        pos = (inicio+fim)/2;
    }
    return -1;   
}

int buscaBinariaRecursiva(int vector[], int inicio, int fim, int elemento){
    int pos = (fim+inicio)/2;

    if (vector[pos] == elemento) {  // elemento encontrado 
        return pos;
    }

    if (inicio > fim) {  // Ponto de parada. elemento não está no vetor 
        return -1;
    }

    if (vector[pos] < elemento) {  // [->] elemento está no sub-vetor à direita 
        return buscaBinariaRecursiva(vector, pos + 1, fim, elemento);

    } else {  // [<-] elemento está no sub-vetor à esquerda
        return buscaBinariaRecursiva(vector, inicio, pos - 1, elemento);
    }
}    

