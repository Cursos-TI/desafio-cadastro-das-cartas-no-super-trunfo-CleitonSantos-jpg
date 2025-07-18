#include <stdio.h>

int main() {
    char nome[50]; // Define um array para armazenar o nome

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê o nome do usuário, incluindo espaços

    printf("hello, %s", nome); // Exibe o nome digitado
    return 0;
}


