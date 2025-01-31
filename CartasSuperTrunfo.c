#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[4];
    char nomeCidade[20];
    float populacao;
    float area;
    double PIB;
    int qtdPontosTuristicos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Código da cidade: ");
    scanf("%s", codigoCidade);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    fflush(stdin);
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &PIB);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtdPontosTuristicos);
        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Carta:\n");
    printf("Código: %s\n", codigoCidade);
    printf("Nome da Cidade: %s", nomeCidade);
    printf("População: %.2f habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: $%.2lf\n", PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", qtdPontosTuristicos);

    return 0;
};
