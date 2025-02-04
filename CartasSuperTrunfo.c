#include <stdio.h>

//Definição da estrutura da carta
 typedef struct { 
    char codigoCidade[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float PIB;
    int qtdPontosTuristicos;
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
    //Variáveis do sistema:
    Carta carta1, carta2;
    float densidadePopulacao, pibPerCapita;

    //Entrada de dados: 
    printf("Digite o Código da cidade: ");
    scanf("%s", carta1.codigoCidade);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    fflush(stdin);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.PIB);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta1.qtdPontosTuristicos);

    //Calculo de atributos das cartas:
    densidadePopulacao = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    pibPerCapita = calcularPibPerCapita(carta1.PIB, carta1.populacao);

    // Exibição dos Dados das Cartas:
    printf("\nDados da Carta:\n");
    printf("Código: %s\n", carta1.codigoCidade);
    printf("Nome da Cidade: %s", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: $ %.2f\n", carta1.PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta1.qtdPontosTuristicos);
    printf("A densidade populacional: %.2f\n", densidadePopulacao);
    printf("O PIB Per Capita: %.2f\n", pibPerCapita);


    return 0;
};
