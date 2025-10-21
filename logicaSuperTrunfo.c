#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    //Declarar variaveis
    unsigned long int populacao,populacao2;
    int pontos_turisticos,pontos_turisticos2,escolha_jogador,escolha_menu1,escolha_menu2;
    float area,area2;
    float pib,pib2;
    char nome[10],nome2[10],codigo[10],codigo2[10],cidade[50],cidade2[50],carta[500],carta2[500],pais[50],pais2[50];

    // configurar numeros aleatorios para cada variavel
    srand(time(0));
    populacao = rand()%90000000 + 1000000;
    populacao2 = rand()%90000000 + 1000000;
    area = (float)rand() / RAND_MAX * (500000.0 - 1000.0) + 1000.0;
    area2 = (float)rand() / RAND_MAX * (500000.0 - 1000.0) + 1000.0;
    pib = (float)rand() / RAND_MAX * (8000000.0 - 1000000.0) + 1000000.0;
    pib2 = (float)rand() / RAND_MAX * (8000000.0 - 1000000.0) + 1000000.0;
    pontos_turisticos = rand()%50 + 1;
    pontos_turisticos2 = rand()%50 + 1;

    //pedir ao user o pais e cidade
    printf("Insira o pais da carta 1\n");
    scanf("%s",&pais);
    printf("Insira a cidade da carta 1\n");
    scanf("%s",&cidade);
    printf("Insira o pais da carta 2\n");
    scanf("%s",&pais2);
    printf("Insira a cidade da carta 2\n");
    scanf("%s",&cidade2);


    //calculo de variaveis baseado nos inputs de user
    float densidade = (float) populacao / area;
    float densidade2 = (float) populacao2 / area2;
    float pib_pc = (float) pib / populacao;
    float pib_pc2 = (float) pib2 / populacao2;

    //Consolidar as infos nas variaveis cartas
    sprintf(carta,
        " Pais: %s - Codigo: A01\n Cidade: %s - Populacao: %lu\n Area: %.2f - PIB: %.2f\n Pontos turisticos: %d\n Densidade Populacional: %.2f - PIB per capita: %.2f\n", 
    pais, cidade, populacao, area, pib, pontos_turisticos,densidade,pib_pc);
    sprintf(carta2,
        " Pais: %s - Codigo: B01\n Cidade: %s - Populacao: %lu\n Area: %.2f - PIB: %.2f\n Pontos turisticos: %d\n Densidade Populacional: %.2f - PIB per capita: %.2f\n", 
    pais2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_pc2);
    
    //calcular superpoder
    float superpoder = (float)populacao + pontos_turisticos + area + densidade + pib + pib_pc;

    float superpoder2 = (float)populacao2 + pontos_turisticos2 + area2 + densidade2 + pib2 + pib_pc2;

    // Menu do Jogo
    printf("***** Jogo Super trunfo *****\n");
    printf("Escolha uma opcao: \n");
    printf("1. Jogar\n");
    printf("2. Ver regras\n");
    printf("3. Sair do jogo\n");
    scanf("%d",&escolha_jogador);

    switch (escolha_jogador) {
    case 1:
      printf("***** Agora selecione o atributo que queira comparar entre as duas cartas: *****\n");
      printf("### Opcao 1: Populacao ###\n");
      printf("### Opcao 2: Area ###\n");
      printf("### Opcao 3: PIB ###\n");
      printf("### Opcao 4: Pontos Turisticos ###\n");
      printf("### Opcao 5: Densidade populacional ###\n");
      printf("### Opcao 6: PIB per capita ###\n");
      scanf("%d",&escolha_menu1);
      switch (escolha_menu1) {
        case 1:
          if (populacao > populacao2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 2:
          if (area > area2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 3:
          if (pib > pib2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 4:
          if (pontos_turisticos > pontos_turisticos2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 5:
          if (densidade < densidade2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 6:
          if (pib_pc > pib_pc2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        default:
          printf("Opcao invalida\n");
      }
    break;
    case 2:
      printf("***** Regras do jogo ***** \n");
      printf("### Escolha um atributo dentre os abaixo para comparar as cartas 1 e 2 e definir o vencedor! ###\n");
      printf("### Opcao 1: Populacao ###\n");
      printf("### Opcao 2: Area ###\n");
      printf("### Opcao 3: PIB ###\n");
      printf("### Opcao 4: Pontos Turisticos ###\n");
      printf("### Opcao 5: Denisidade populacional ###\n");
      printf("### Opcao 6: PIB per capita ###\n");
      printf("~~~* Agora escolha de 1 a 6 para comparar os atributos ou escolha o numero 0 para sair *~~~\n");
      scanf("%d",&escolha_menu2);
      switch (escolha_menu2) {
        case 0:
            printf("Voce saiu do jogo!\n");
          break;
        case 1:
          if (populacao > populacao2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 2:
          if (area > area2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 3:
          if (pib > pib2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 4:
          if (pontos_turisticos > pontos_turisticos2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 5:
          if (densidade < densidade2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        case 6:
          if (pib_pc > pib_pc2) {
            printf("***** A carta 1 venceu! *****\n");
          }
          else {
            printf("***** A carta 2 venceu! *****\n");
          }
          break;
        default:
          printf("Opcao invalida\n");
      }
    break;
    case 3:
      printf("Voce saiu do jogo!\n");
    break;
    default:
      printf("Opcao invalida\n");
  }

    //imprime as cartas
    printf("\n ------- Carta1 -------\n");
    printf("%s\n",carta);

    printf("\n ------- Carta2 -------\n");
    printf("%s\n",carta2);


    return 0;
}
