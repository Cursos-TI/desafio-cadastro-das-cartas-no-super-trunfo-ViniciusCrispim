#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
float calcularDensidadePopulacional(int populacao, float area){
        float densidade = (float) populacao / area;
        return densidade;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float PIB;
    int qtdPontosTuristicos;
    float densidadePopulacao;

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
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtdPontosTuristicos);

    densidadePopulacao = calcularDensidadePopulacional(populacao, area);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Carta:\n");
    printf("Código: %s\n", codigoCidade);
    printf("Nome da Cidade: %s", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: $%.2f\n", PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", qtdPontosTuristicos);
    printf("A densidade populacional é de: %.2f\n", densidadePopulacao);

    return 0;
};
