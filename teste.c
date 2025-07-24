#include <stdio.h>
#include <string.h>

int main() {

    // Seleção de variáveis.
    char Estado, Nome_da_cidade [20], Codigo_da_carta [4], Codigo_str[3], Estado2, Nome_da_cidade2 [20], Codigo_da_carta2 [4], Codigo_str2[3];
    int Populacao, Numero_de_pontos_turisticos, Codigo, Populacao2, Numero_de_pontos_turisticos2, Codigo2;
    float PIB, Area, PIB2, Area2;
    
    // Entrada de dados para carta 01.
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Esta sera sua primeira carta (01) então:\nDigite a letra 'A-H' que representa seu estado: ");
    scanf(" %c", &Estado);
    printf("Digite o código da carta (2 digitos de 01-04): ");
    scanf("%d", &Codigo);
    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(Nome_da_cidade, sizeof(Nome_da_cidade), stdin);
    Nome_da_cidade[strcspn(Nome_da_cidade, "\n")] = '\0';
    printf("Digite o número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &Numero_de_pontos_turisticos);
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao);
    printf("Digite o PIB da cidade selecionada (em bilhões de reais): ");
    scanf("%f", &PIB);
    printf("Digite a área da cidade (em KM²): ");
    scanf("%f", &Area);
    Codigo_da_carta[0] = Estado;
    Codigo_da_carta[1] = '\0';
    // Concatenação do código da carta com o estado.
    sprintf(Codigo_str, "%d", Codigo); // Converte número inteiro para string.
    strcat(Codigo_da_carta, Codigo_str); 

    // Entrada de dados para carta 02.
    printf("\n\nAgora digite as informações da sua segunda carta\nDigite a letra 'A-H' que representa seu estado (diferente da carta 01): ");
    scanf(" %c", &Estado2);
    printf("Digite o código da segunda carta (2 digitos de 01-04): ");
    scanf("%d", &Codigo2);
    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(Nome_da_cidade2, sizeof(Nome_da_cidade2), stdin);
    Nome_da_cidade2[strcspn(Nome_da_cidade2, "\n")] = '\0';
    printf("Digite o número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &Numero_de_pontos_turisticos2);
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);
    printf("Digite o PIB da cidade selecionada (em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Digite a área da cidade (em KM²): ");
    scanf("%f", &Area2);
    Codigo_da_carta2[0] = Estado2;
    Codigo_da_carta2[1] = '\0';
    // Concatenação do código da carta com o estado.
    sprintf(Codigo_str2, "%d", Codigo2); // Converte número inteiro para string.
    strcat(Codigo_da_carta2, Codigo_str2); 


    // Impressão dos dados.
    printf("\n\nDados da carta 01:\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", Codigo_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Area: %.2f KM²\n", Area);
    printf("PIB: %.2f Bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos);

    printf("\nDados da carta 02:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da carta: %s\n", Codigo_da_carta2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Area: %.2f KM²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);

    return 0;

}


