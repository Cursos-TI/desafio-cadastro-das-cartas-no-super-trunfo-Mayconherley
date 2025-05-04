#include <stdio.h>

int main() {
    
    //Declaração das variáveis das Cartas 1 e 2
    char codigo1[4], codigo2[4];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristicos1, pontoTuristicos2;

    //Cadastro da carta 1
    printf("Cadastro da primeira carta \n");
    printf("Digite o código (ex: A01): \n");
    scanf("%s", &codigo1);
    printf("Digite a populção: \n");
    scanf("%f", &populacao1);
    printf("Digite a área em (km²): \n");
    scanf("%f", &area1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontoTuristicos1);

     //Cadastro da carta 2
     printf("Cadastro da segunda carta \n");
     printf("Digite o código (ex: A02): \n");
     scanf("%s", &codigo2);
     printf("Digite a populção: \n");
     scanf("%f", &populacao2);
     printf("Digite a área em (km²): \n");
     scanf("%f", &area2);
     printf("Digite o pib: \n");
     scanf("%f", &pib2);
     printf("Digite a quantidade de pontos turísticos: \n");
     scanf("%d", &pontoTuristicos2);

     //Retornando dados de saída para a exibição da carta 1
     printf("\n--Carta 1--\n");
     printf("Código -> %d \n", codigo1);
     printf("População -> %f \n", populacao1);
     printf("Área -> %f  \n", area1);
     printf("PIB -> %f \n", pib1);
     printf("Pontos turísticos -> %f \n", pontoTuristicos1);

      //Retornando dados de saída para a exibição da carta 2
      printf("\n--Carta 2--\n");
      printf("Código -> %d \n", codigo2);
      printf("População -> %f \n", populacao2);
      printf("Área -> %f  \n", area2);
      printf("PIB -> %f \n", pib2);
      printf("Pontos turísticos -> %f \n", pontoTuristicos2);
 

    return 0;
}
