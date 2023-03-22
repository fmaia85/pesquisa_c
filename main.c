#include<stdio.h>
#include"busca.h"

int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    int elemento;
    scanf("%d", &elemento);

    // int res = buscaLinear(vetor, n, elemento);
    int res = buscaBinariaInterativa(vetor, n, elemento);
    //int res = buscaBinariaRecursiva(vetor, 0, n, elemento);

    printf("%d", res);
    printf("\n\n\n");
    return 0;
}