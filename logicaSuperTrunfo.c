#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Desafio Mestre Lógica Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Tiago da Rocha

int main() {
    // Declaração de variáveis únicas
    char escFinal[10];
    int escAtributo1;
    int escAtributo2;
    int resultado1;
    int resultado2;


    // Carta 1 - São Paulo

    // Início da Declaração de Variáveis
    char estado_1;
    char codCarta_1[10];
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int numPonTuristicos_1;
    float denPopulacional_1;
    float pibPCapita_1;
    float superPoder_1;
    // Fim da Declaração de Variáveis da Carta 1


    // Próxima Carta


    // Carta 2 - Rio de Janeiro

    // Início da Declaração de Variáveis
    char estado_2;
    char codCarta_2[10];
    char cidade_2[30];
    int populacao_2;
    float area_2;
    float pib_2;
    int numPonTuristicos_2;
    float denPopulacional_2;
    float pibPCapita_2;
    float superPoder_2;
    // Fim da Declaração de Variáveis da Carta 2


    // Início da Leitura das Cartas


    // Entrada dos Dados da Carta 1
    printf("Definições da 1º Carta:\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado_1);

    printf("(Código da Carta): Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codCarta_1);

    getchar(); // consome o \n que ficou no buffer

    printf("Digite o nome da cidade:\n");
    fgets(cidade_1, 20, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao_1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade(não use pontos ou vírgulas):\n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &numPonTuristicos_1);

    // Cálculo Densidade Populacional
    denPopulacional_1 = (float) populacao_1 / area_1;

    // Cálculo PIB per Capita
    pibPCapita_1 = pib_1 / (float) populacao_1;

    // Cálculo do Super Poder
    superPoder_1 = (float) populacao_1 + area_1 + pib_1 + (float)numPonTuristicos_1 + pibPCapita_1 + (area_1 / (float) populacao_1);
    // Fim da Leitura da Carta 1


    printf("\n"); // Espaço entre as definições das cartas 1 e 2


    // Entrada dos Dados da Carta 2
    printf("Definições da 2º Carta:\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado_2);

    printf("(Código da Carta): Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codCarta_2);

    getchar(); // consome o \n que ficou no buffer


    printf("Digite o nome da cidade:\n");
    fgets(cidade_2, 30, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade(não use pontos ou vírgulas):\n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &numPonTuristicos_2);

    // Cálculo Densidade Populacional
    denPopulacional_2 = (float) populacao_2 / area_2;

    // Cálculo PIB per Capita
    pibPCapita_2 = pib_2 / (float) populacao_2;

    // Cálculo do Super Poder
    superPoder_2 = (float) populacao_2 + area_2 + pib_2 + (float)numPonTuristicos_2 + pibPCapita_2 + (area_2 / (float) populacao_2);
    // Fim da Leitura da Carta 2

    printf("\n");
    printf("Cartas Definidas Com Sucesso. Parabéns!\n");
    printf("\n");

    // Início da Vizualização das Cartas

    printf("Visualização das Cartas\n");

    // Saída dos Dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codCarta_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f Km2\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", numPonTuristicos_1);
    printf("Densidade Populacional: %.2f hab/Km2\n", denPopulacional_1);
    printf("PIB per Capita: %.2f reais\n", pibPCapita_1);
    printf("Super Poder: %.2f\n", superPoder_1);
    // Fim da Vizualização da Carta 1


    printf("\n"); // Espaço entre as cartas


    // Saída dos Dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codCarta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f Km2\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numPonTuristicos_2);
    printf("Densidade Populacional: %.2f hab/Km2\n", denPopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibPCapita_2);
    printf("Super Poder: %.2f\n", superPoder_2);
    // Fim da Vizualização da Carta 2
    
    printf("\n");
    printf("Cartas Visualizadas Com Sucesso. Parabéns!\n");
    printf("\n");

    // Início da Comparação(batalha) das Cartas

    // Atributo 1
    printf("Sessão Comparação de Cartas\n");

    printf("Escolha do 1º atributo:\n");
    printf("Qual atributo você deseja comparar?\n");
    printf("Escolha...\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional(vence a carta com o menor valor)\n");
    printf("6. Super Poder\n");
    printf("Qual é a sua escolha?: ");
    scanf("%d", &escAtributo1);

    printf("\nComparando...\n\n");


    // Primeira jogada
    printf("1ª Comparação\n");
    switch (escAtributo1) {
        case 1:
            // Comparação dos atributos "População"
            printf("Atributo: População\n\n");
            printf("1ª Carta: %d\n", populacao_1);
            printf("2ª Carta: %d\n", populacao_2);
            
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        case 2:
            // Comparação dos atributos "Área"
            printf("Atributo: Área\n\n");
            printf("1ª Carta: %.2f\n", area_1);
            printf("2ª Carta: %.2f\n", area_2);

            resultado1 = area_1 > area_2 ? 1 : 0;
            break;
        case 3:
            // Comparação dos atributos "PIB"
            printf("Atributo: PIB\n\n");
            printf("1ª Carta: %.2f\n", pib_1);
            printf("2ª Carta: %.2f\n", pib_2);

            resultado1 = pib_1 > pib_2 ? 1 : 0;
            break;
        case 4:
            // Comparação dos atributos "Pontos Turísticos"
            printf("Atributo: Pontos Turísticos\n\n");
            printf("1ª Carta: %d\n", numPonTuristicos_1);
            printf("2ª Carta: %d\n", numPonTuristicos_2);

            resultado1 = numPonTuristicos_1 > numPonTuristicos_2 ? 1 : 0;
            break;            
        case 5:
            // Comparação dos atributos "Densidade Populacional"
            printf("Atributo: Densidade Populacional\n\n");
            printf("1ª Carta: %.2f\n", denPopulacional_1);
            printf("2ª Carta: %.2f\n", denPopulacional_2);

            resultado1 = denPopulacional_1 < denPopulacional_2 ? 1 : 0;
            break;
        case 6:
            // Comparação dos atributos "Super Poder"
            printf("Atributo: Super Poder\n\n");
            printf("1ª Carta: %.2f\n", superPoder_1);
            printf("2ª Carta: %.2f\n", superPoder_2);

            resultado1 = superPoder_1 > superPoder_2 ? 1 : 0;
            break;
        default:
            printf("[Erro]:Opção inválida!\n\n");
            break;
    }

    printf("Resultado:\n");
    if (resultado1 == 1) {
        printf("1ª Carta venceu!!!\n\n");
    } else if (resultado1 == 0) {
        printf("2ª Carta venceu!!!\n\n");
    } else {
        printf("Temos um empate!!!\n\n");
    }

    // Segunda jogada

    // Atributo 2

    printf("Escolha do 2º atributo:\n");
    printf("Qual atributo você deseja comparar?\n");
    printf("Você deve escolher um atributo diferente!\n");
    printf("Escolha...\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional(vence a carta com o menor valor)\n");
    printf("6. Super Poder\n");
    printf("Qual é a sua escolha?: ");
    scanf("%d", &escAtributo2);

    printf("\nComparando...\n\n");

    printf("2ª Comparação\n");
    // Se a escolha do atributo 2 for igual a do 1 então não funcionará a segunda escolha
    if (escAtributo1 == escAtributo2) {
        printf("[ERRO]: Você escolheu o mesmo atributo!");
    } else {
        switch (escAtributo2) {
            case 1:
                // Comparação dos atributos "População"
                printf("Atributo: População\n\n");
                printf("1ª Carta: %d\n", populacao_1);
                printf("2ª Carta: %d\n", populacao_2);

                resultado2 = populacao_1 > populacao_2 ? 1 : 0;
                break;
            case 2:
                // Comparação dos atributos "Área"
                printf("Atributo: Área\n\n");
                printf("1ª Carta: %.2f\n", area_1);
                printf("2ª Carta: %.2f\n", area_2);

                resultado2 = area_1 > area_2 ? 1 : 0;
                break;
            case 3:
                // Comparação dos atributos "PIB"
                printf("Atributo: PIB\n\n");
                printf("1ª Carta: %.2f\n", pib_1);
                printf("2ª Carta: %.2f\n", pib_2);

                resultado2 = pib_1 > pib_2 ? 1 : 0;
                break;
            case 4:
                // Comparação dos atributos "Pontos Turísticos"
                printf("Atributo: Pontos Turísticos\n\n");
                printf("1ª Carta: %d\n", numPonTuristicos_1);
                printf("2ª Carta: %d\n", numPonTuristicos_2);

                resultado2 = numPonTuristicos_1 > numPonTuristicos_2 ? 1 : 0;
                break;            
            case 5:
                // Comparação dos atributos "Densidade Populacional"
                printf("Atributo: Densidade Populacional\n\n");
                printf("1ª Carta: %.2f\n", denPopulacional_1);
                printf("2ª Carta: %.2f\n", denPopulacional_2);

                resultado2 = denPopulacional_1 < denPopulacional_2 ? 1 : 0;
                break;
            case 6:
                // Comparação dos atributos "Super Poder"
                printf("Atributo: Super Poder\n\n");
                printf("1ª Carta: %.2f\n", superPoder_1);
                printf("2ª Carta: %.2f\n", superPoder_2);

                resultado2 = superPoder_1 > superPoder_2 ? 1 : 0;
                break;
            default:
                printf("[Erro]:Opção inválida!\n\n");
                break;
        }

        printf("Resultado:\n");
        if (resultado2 == 1) {
            printf("1ª Carta venceu!!!\n\n");
        } else if (resultado2 == 0) {
            printf("2ª Carta venceu!!!\n\n");
        } else {
            printf("Temos um empate!!!\n\n");
        }
    }

    printf("Resultado Final:\n");

    if (resultado1 && resultado2) {
        printf("Parabéns, Você venceu o jogo!\n");
    } else if (resultado1 != resultado2) {
        printf("Eita. Deu empate!\n");
    } else {
        printf("Nossa, Você perdeu!\n");
    }
    

    // Fim do Programa
    printf("\n----------------------------------------\n");
    printf("Fim do Programa!\n");
    
    printf("Você se divertiu? (Sim/Claro): ");
    scanf("%s", escFinal);


    return 0;

    /*
    switch (escAtributo1) {
        case 1:
            // Comparação dos atributos "População"
            printf("Atributo: População\n");
            printf("1ª Carta: %d\n", populacao_1);
            printf("2ª Carta: %d\n", populacao_2);
            printf("Resultado:\n");

            if (populacao_1 > populacao_2) {
                printf("1ª Carta venceu!!!\n\n");
            } else if (populacao_1 < populacao_2) {
                printf("2ª Carta venceu!!!\n\n");
            } else {
                printf("Temos um empate!!!\n\n");
            }
            break;
        case 2:
            // Comparação dos atributos "Área"
            printf("Atributo: Área\n");
            printf("1ª Carta: %.2f\n", area_1);
            printf("2ª Carta: %.2f\n", area_2);
            printf("Resultado:\n");

            if (area_1 > area_2) {
                printf("1ª Carta venceu!\n\n");
            } else if (area_1 < area_2) {
                printf("2ª Carta venceu!\n\n");
            } else {
                printf("Temos um empate!!!\n\n");
            }
            break;
        case 3:
            // Comparação dos atributos "PIB"
            printf("Atributo: PIB\n");
            printf("1ª Carta: %.2f\n", pib_1);
            printf("2ª Carta: %.2f\n", pib_2);
            printf("Resultado:\n");

            if (pib_1 > pib_2) {
                printf("1ª Carta venceu!\n\n");
            } else if (pib_1 < pib_2) {
                printf("2ª Carta venceu!\n\n");
            } else {
                printf("Temos um empate!!!\n\n");
            }
            break;
        case 4:
            // Comparação dos atributos "Pontos Turísticos"
            printf("Atributo: Pontos Turísticos\n");
            printf("1ª Carta: %d\n", numPonTuristicos_1);
            printf("2ª Carta: %d\n", numPonTuristicos_2);
            printf("Resultado:\n");

            if (numPonTuristicos_1 > numPonTuristicos_2) {
                printf("1ª Carta venceu!\n\n");
            } else if (numPonTuristicos_1 < numPonTuristicos_2) {
                printf("2ª Carta venceu!\n\n");
            } else {
                printf("Temos um empate!!!\n\n");
            }
            break;            
        case 5:
            // Comparação dos atributos "Densidade Populacional"
            printf("Atributo: Densidade Populacional\n");
            printf("1ª Carta: %.2f\n", denPopulacional_1);
            printf("2ª Carta: %.2f\n", denPopulacional_2);
            printf("Resultado:\n");

            if (denPopulacional_1 < denPopulacional_2) {
                printf("1ª Carta venceu!\n\n");
            } else if (denPopulacional_1 > denPopulacional_2) {
                printf("2ª Carta venceu!\n\n");
            } else {
                printf("Temos um empate!!!\n\n");
            }
            break;
        case 6:
            // Comparação dos atributos "Super Poder"
            printf("Atributo: Super Poder\n");
            printf("1ª Carta: %.2f\n", superPoder_1);
            printf("2ª Carta: %.2f\n", superPoder_2);
            printf("Resultado:\n");

            if (superPoder_1 > superPoder_2) {
                printf("1ª Carta venceu!\n\n");
            } else if (superPoder_1 < superPoder_2) {
                printf("2ª Carta venceu!\n\n");
            } else {
                printf("Temos um empate!!!\n\n");
            }
            break;
        default:
            printf("[Erro]:Opção inválida!\n\n");
            break;
    } 
    */
}
