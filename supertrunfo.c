#include<stdio.h>

// Desafio Super trunfo

int main(){

    // Variáveis
    
    char estado1, estado2;
    char código1[4], código2[4]; 
    char cidade1[20], cidade2[20];
    int população1, população2; 
    float área1, área2;
    float PIB1, PIB2;
    int pontosturísticos1[4], pontosturísticos2[4];     
            
    // Dados carta 1

    printf("Informe o código do Estado 1: \n");
    scanf("%c", &estado1);
    
    printf("Informe o nome da cidade 1: \n");
    scanf("%s", &cidade1);
    
    printf("Informe o código da carta 1: \n");
    scanf("%s", &código1);
    
    printf("Informe o PIB da cidade 1: \n");
    scanf("%f", &PIB1);
    
    printf("Informe a área urbana da cidade 1: \n");
    scanf("%f", &área1);
    
    printf("Informe a população da cidade 1: \n");
    scanf("%d", &população1);
    
    printf("Informe quantos pontos turísticos tem a cidade 1: \n");
    scanf("%d", &pontosturísticos1);

//Saída de dados cidade 1
    
    printf("-----Carta 1-----\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", código1);
    printf("Cidade: %s\n", cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Área urbana: %f km²\n", área1);
    printf("População: %d\n", população1);
    printf("Pontos turísticos: %d\n", pontosturísticos1);

    //Dados carta 2

    printf("Informe o código do Estado 2: \n");
    scanf(" %c", &estado2);

    printf("Informe o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Informe o código da carta 2: \n");
    scanf(" %s", &código2);

    printf("Informe o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("Informe a área urbana da cidade 2: \n");
    scanf("%f", &área2);

    printf("Informe a população da cidade 2: \n");
    scanf("%d", &população2);

    printf("Informe quantos pontos turísticos tem a cidade 2: \n");
    scanf("%d", &pontosturísticos2);


    //Saída de dados cidade 2
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", código2);
    printf("Cidade: %s\n", cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área urbana: %.2f km²\n", área2);
    printf("População: %d\n", população2);
    printf("Pontos turísticos: %d\n", pontosturísticos2);


    return 0;

     /*
    printf(%formato1 %formato2 %formato3, variavel1 variavel2 variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivale a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante em notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres


    */
    }