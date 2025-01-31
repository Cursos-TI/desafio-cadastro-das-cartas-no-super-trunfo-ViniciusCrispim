#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[3];
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
    fflush(stdin);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    fflush(stdin);
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da ciidade: ");
    scanf("%lf", &PIB);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtdPontosTuristicos);

    //printf("%s\n", codigoCidade);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da Carta:\n");
    printf("Código: %s\n", codigoCidade);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %f habitantes\n", populacao);
    printf("Area: %f km²\n", area);
    printf("PIB: $ %lf", PIB);
    printf("Quantidade de Pontos Turisticos: %d", qtdPontosTuristicos);



    return 0;
};
