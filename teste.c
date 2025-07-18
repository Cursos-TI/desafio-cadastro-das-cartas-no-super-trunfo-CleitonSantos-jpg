#include <stdio.h>
#include <string.h>

int main() {

    // Seleção de variáveis.
    char Estado, Nome_da_cidade [20], Codigo[2], Codigo_da_carta [3];
    int Populacao, Numero_de_pontos_turisticos;
    float PIB, Area;
    
    // Entrada de dados.
    printf("Digite a letra 'A-H' que representa seu estado: ");
    scanf(" %c", &Estado);
    printf("Digite o código da carta (2 digitos): ");
    scanf("%s", Codigo);
    printf("Digite o número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &Numero_de_pontos_turisticos);
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao);
    printf("Digite o PIB da cidade selecionada: ");
    scanf("%f", &PIB);
    printf("Digite a área da cidade (em KM²): ");
    scanf("%f", &Area);
    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(Nome_da_cidade, sizeof(Nome_da_cidade), stdin);
    Nome_da_cidade[strcspn(Nome_da_cidade, "\n")] = '\0';

}


