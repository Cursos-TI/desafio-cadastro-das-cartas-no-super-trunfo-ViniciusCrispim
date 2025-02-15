#include <stdio.h>

//Definição da estrutura da carta:
typedef struct { 
    char estado[3];
    char codigoCidade[4];
    char nomeCidade[20];
    unsigned long int populacao;
    float area;
    float PIB;
    int qtdPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

//Função que realiza o cáculo das propriedades calculadas:
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
    printf("Estado: %s\n", carta.estado);
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

//Funções de comparação:
//Compara propriedades de Inteiro:
int compararInteiros(int carta1, int carta2){
    return carta1 > carta2 ? 1 : 0;
}
//Compara propriedade de Float:
int compararFloat(float carta1, float carta2){
    return carta1 > carta2 ? 1 : 0;
}
//Compara duas cartas e todas suas propriedades:
int compararCartas (Carta carta1, Carta carta2){
    imprimirCarta(carta1);
    imprimirCarta(carta2);
    
    printf("\nO ganhador com População foi: %s\n", compararInteiros(carta1.populacao, carta2.populacao) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("O ganhador com Area foi: %s\n", compararFloat(carta1.area, carta2.area) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("O ganhador com PIB foi: %s\n", compararFloat(carta1.PIB, carta2.PIB) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("O ganhador com quantidade de pontos turisticos foi: %s\n", compararInteiros(carta1.qtdPontosTuristicos, carta2.qtdPontosTuristicos) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("O ganhador com Densidade Populacional foi: %s\n", compararFloat(carta1.densidadePopulacional, carta2.densidadePopulacional) ? carta2.nomeCidade : carta1.nomeCidade);
    printf("O ganhador com PIB per Capita foi: %s\n", compararFloat(carta1.pibPerCapita, carta2.pibPerCapita) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("O ganhador com Super Poder foi: %s\n", compararFloat(carta1.superPoder, carta2.superPoder) ? carta1.nomeCidade : carta2.nomeCidade);

}

//Função de leitura de dados para inserir na carta:
int inserirDados (Carta *carta){
    printf("Digite o Estado: ");
    scanf("%s", carta->estado);
    getchar();
    printf("Digite o Código da cidade: ");
    scanf("%s", carta->codigoCidade);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(carta->nomeCidade, sizeof(carta->nomeCidade), stdin);
    printf("Digite a população da cidade: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->PIB);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &carta->qtdPontosTuristicos);
    getchar();
    return 1;
}

int main() {
    //Variáveis do sistema:
    Carta carta1, carta2;

    //Entrada de dados nas cartas:
    printf("Insira os dados da primeira carta\n");
    inserirDados(&carta1);
    printf("\nInsira os dados da segunda carta\n");
    inserirDados(&carta2);
    
    //Calculo de atributos das cartas:
    calcularPropriedades(&carta1);
    calcularPropriedades(&carta2);

    //Exibição dos dados de cada carta:
    imprimirCarta(carta1);
    imprimirCarta(carta2);

    //Realização da comparação entre as cartas:
    prinft("Resultado da comparação entre as cartas:\n");
    compararCartas(carta1, carta2);

    return 0;
};