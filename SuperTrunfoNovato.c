#include <stdio.h>

int main(){
    unsigned long int populacao, populacao2;
    int turismo, turismo2;
    float area, area2, PIB, PIB2;
    char estado, estado2, nome[20], nome2[20], codigo[30], codigo2[30];

// Carta 1
    
    printf("CARTA 1: \n");

    printf("Estado (primeira letra do estado): \n");
    scanf(" %c", &estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%u", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turismo);

    
    float pibpercapita1 = PIB / populacao, pibpercapita2 = PIB2 / populacao2;
    float densidade1 = populacao / area, densidade2 = populacao2 / area2;



    printf("\n");
    // CARTA 2

    printf("\n" "CARTA 2: \n");

    printf("Estado (primeira letra do estado): \n");
    scanf(" %c", &estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nome2);

    printf("População: \n");
    scanf("%u", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turismo2);



 // Cadastro das cartas

    printf("CARTA 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %u pessoas\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: R$ %.3f \n", PIB);
    printf("Quantidade de pontos turísticos: %d \n", turismo);
    printf("PIB per capita: R$ %.3f \n", pibpercapita1);
    printf("Densidade Populacional: %.3f km² \n", densidade1);


    printf("CARTA 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %u pessoas\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.3f\n", PIB2);
    printf("Quantidade de pontos turísticos: %d\n", turismo2);
    printf("PIB per capita: R$ %.3f \n", pibpercapita2);
    printf("Densidade Populacional: %.3f km² \n", densidade2);

       float superporder1 = (float) populacao + area + PIB + turismo + pibpercapita1 - densidade1; 

       float superporder2 = (float) populacao2 + area2 + PIB2 + turismo2 + pibpercapita2 - densidade2; 


    // Comparação entre as cartas

    printf("Carta de %s - (%s) X Carta de %s - (%s)\n", nome, codigo, nome2, codigo2);
 
    printf("Carta de %s vencedora resultado = 1, Carta de %s vencedora resultado = 0\n", nome, nome2);

    printf("População: %d\n", populacao > populacao2);

    printf("Área: %d\n", area > area2);

    printf("PIB: %d\n", PIB > PIB2);

    printf("Pontos turísticos : %d\n", turismo > turismo2);

    printf("PIB per capita: %d\n", pibpercapita1 > pibpercapita2);

    printf("Densidade populacional : %d\n", densidade1 < densidade2);

    printf("SUPER PODER: %d \n", superporder1 > superporder2);

     


      return 0;

    }
    
