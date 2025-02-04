#include <stdio.h>

//Definição da estrutura da carta
 typedef struct { 
    char codigoCidade[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float PIB;
    int qtdPontosTuristicos;
    float densidadePopulacao, pibPerCapita;
    } Carta;

//Função para calcular a Densidade Populacional
float calcularDensidadePopulacional(int populacao, float area){
        float densidade = (float) populacao / area;
        return densidade;
};
//Função para calcular o PIB Per Capita
float calcularPibPerCapita (float pib, int populacao){
    float pibPerCapita = pib / populacao;
    return pibPerCapita;
}

int main() {
    Carta carta1, carta2;

    // printf("Digite o Código da cidade: ");
    // scanf("%s", carta1.codigoCidade);
    // getchar();
    // printf("Digite o nome da cidade: ");
    // fgets(nomeCidade, sizeof(nomeCidade), stdin);
    // fflush(stdin);
    // printf("Digite a população da cidade: ");
    // scanf("%d", &carta1.populacao);
    // printf("Digite a area da cidade: ");
    // scanf("%f", &carta1.area);
    // printf("Digite o PIB da cidade: ");
    // scanf("%f", &carta1.PIB);
    // printf("Digite a quantidade de pontos turisticos: ");
    // scanf("%d", &carta1.qtdPontosTuristicos);

    // densidadePopulacao = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    // pibPerCapita = calcularPibPerCapita(PIB, populacao);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Carta:\n");
    // printf("Código: %s\n", codigoCidade);
    // printf("Nome da Cidade: %s", nomeCidade);
    // printf("População: %d habitantes\n", carta1.populacao);
    // printf("Area: %.2f km²\n", carta1.area);
    // printf("PIB: $%.2f\n", carta1.PIB);
    // printf("Quantidade de Pontos Turisticos: %d\n", carta1.qtdPontosTuristicos);
    // printf("A densidade populacional é de: %.2f\n", densidadePopulacao);
    // printf("O PIB Per Capita é de: %.2f\n", pibPerCapita);


    return 0;
};
