#include <stdio.h>

//Definição da estrutura da carta
typedef struct { 
    char codigoCidade[4];
    char nomeCidade[20];
    unsigned long int populacao;
    float area;
    float PIB;
    int qtdPontosTuristicos;
    float densidadePopulacional;
    double pibPerCapita;
    float superPoder;
} Carta;


void calcularPropriedades(Carta *carta){
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->PIB / carta->populacao;
    carta->superPoder = (float) carta->area + carta->populacao + carta->PIB + carta->qtdPontosTuristicos + carta->densidadePopulacional + 
                        carta->pibPerCapita;
};
//Função de exibir dados da carta:
void imprimirCarta (Carta carta){
     // Exibição dos Dados das Cartas:
    printf("\nDados da Carta:\n");
    printf("Código: %s\n", carta.codigoCidade);
    printf("Nome da Cidade: %s", carta.nomeCidade);
    printf("População: %lu habitantes\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: $ %.2f\n", carta.PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta.qtdPontosTuristicos);
    printf("A densidade populacional: %.2f\n", carta.densidadePopulacional);
    printf("O PIB Per Capita: %.2f\n", carta.pibPerCapita);
    printf("Super poder é de: %.2f\n", carta.superPoder);
}

int main() {
    //Variáveis do sistema:
    Carta carta1, carta2;

    //Entrada de dados: 
    printf("Digite o Código da cidade: ");
    scanf("%s", carta1.codigoCidade);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    fflush(stdin);
    printf("Digite a população da cidade: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.PIB);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta1.qtdPontosTuristicos);

    //Calculo de atributos das cartas:
    calcularPropriedades(&carta1);

    imprimirCarta(carta1);

    return 0;
};
