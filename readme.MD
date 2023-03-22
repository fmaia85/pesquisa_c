# Introdução

Repositório criado para armazenar exemplos de pesquisa de dados em C.

Implementações de:
1. Busca Linear (sequencial).
2. Busca Binária Iteratica.
3. Busca Binária Recursiva.

As implementações funcionam apenas para valores de tipo inteiro.

## Selecionando o algoritmo

Nas linhas 14, 15, e 16 do arquivo main.c, selecionar qual algoritmo será executado.

## Compilação

Para compilar, executar no terminal:

'''
gcc -o programa main.c busca.c
'''

## Testes

Após compilar a aplicação, executar:

'''
./programa < testeRand.txt
'''
ou
'''
./programa < testeRand.txt
'''

Dependendo se desejar executar com dados aleatórios ou ordenados.

*Atenção:* os algoritmos de busca binária funcionam apenas para dados ordenados.