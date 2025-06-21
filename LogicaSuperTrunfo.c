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

float pibpercapita1 = (float) PIB / populacao, pibpercapita2 = (float) PIB2 / populacao2;
float densidade1 = (float) populacao / area, densidade2 = (float) populacao2 / area2;

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


   // Comparação das cartas usando lógica

   int comparacao;
   int comparacao2;
   int resultado1;
   int resultado2;

    printf("Escolha dois atributos a serem comparados:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade populacional\n");
    printf("7. SUPER PODER\n");
    printf("Escolha o primeiro atributo a ser comparado: ");
    scanf("%d", &comparacao);
   
    // PRIMEIRO ATRIBUTO

    switch(comparacao){
        case 1: 
        printf("Atributo escolhido: População!\n");
        printf("População de %s: %u X População de %s: %u \n", nome, populacao, nome2, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;
        case 2: 
        printf("Atributo escolhido: Área!\n");
        printf("Área de %s: %.3f X Área de %s: %.3f \n", nome, area, nome2, area2);
        resultado1 = area > area2 ? 1 : 0;
        break;
      
        case 3: 
        printf("Atributo escolhido: PIB!\n");
        printf("PIB de %s: %.3f X PIB de %s: %.3f \n", nome, PIB, nome2, PIB2);
        resultado1 = PIB > PIB2 ? 1 : 0;
        break;
         
        case 4: 
        printf("Atributo escolhido: Quantidade de pontos turísticos!\n");
        printf("Quantidade de pontos turísticos de %s: %d X Quantidade de pontos turísticos de %s: %d \n", nome, turismo, nome2, turismo2);
        resultado1 = turismo > turismo2 ? 1 : 0;
        break;

        case 5:
        printf("Atributo escolhido: Pib per capita!\n");
        printf("Pib per capita de %s: %.2f X Pib per capita de %s: %.2f \n", nome, pibpercapita1, nome2, pibpercapita2);
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        break;

        case 6: 
        printf("Atributo escolhido: Densidade populacional\n");
        printf("Densidade populacional de %s: %.2f X Densidade populacional de %s: %.2f \n", nome, densidade1, nome2, densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

        case 7: 
         printf("Atributo escolhido: SUPER PODER!\n");
        printf("SUPER PODER de %s: %.2f X SUPER PODER de %s: %.2f \n", nome, superporder1, nome2, superporder2);
        resultado1 = superporder1 > superporder2 ? 1 : 0;
        break;
        
        default:
        printf("Opção inválida!");
        break;


       }

       // SEGUNDO ATRIBUTO

       do{
        printf("Escolha o segundo atributo a ser comparado: ");
        scanf("%d", &comparacao2);
        if(comparacao == comparacao2){
        printf("Você escolheu o mesmo atributo!");
       }
       } while (comparacao2 == comparacao);
       
       switch(comparacao2){
        case 1: 
        printf("Atributo escolhido: População!\n");
        printf("População de %s: %u X População de %s: %u \n", nome, populacao, nome2, populacao2);
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;
        case 2: 
        printf("Atributo escolhido: Área!\n");
        printf("Área de %s: %.3f X Área de %s: %.3f \n", nome, area, nome2, area2);
        resultado2 = area > area2 ? 1 : 0;
        break;
      
        case 3: 
        printf("Atributo escolhido: PIB!\n");
        printf("PIB de %s: %.3f X PIB de %s: %.3f \n", nome, PIB, nome2, PIB2);
        resultado2 = PIB > PIB2 ? 1 : 0;
        break;
         
        case 4: 
        printf("Atributo escolhido: Quantidade de pontos turísticos!\n");
        printf("Quantidade de pontos turísticos de %s: %d X Quantidade de pontos turísticos de %s: %d \n", nome, turismo, nome2, turismo2);
        resultado2 = turismo > turismo2 ? 1 : 0;
        break;

        case 5:
        printf("Atributo escolhido: Pib per capita!\n");
        printf("Pib per capita de %s: %.2f X Pib per capita de %s: %.2f \n", nome, pibpercapita1, nome2, pibpercapita2);
        resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        break;

        case 6: 
        printf("Atributo escolhido: Densidade populacional\n");
        printf("Densidade populacional de %s: %.2f X Densidade populacional de %s: %.2f \n", nome, densidade1, nome2, densidade2);
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;

        case 7: 
         printf("Atributo escolhido: SUPER PODER!\n");
        printf("SUPER PODER de %s: %.2f X SUPER PODER de %s: %.2f \n", nome, superporder1, nome2, superporder2);
        resultado2 = superporder1 > superporder2 ? 1 : 0;
        break;
        
        default:
        printf("Opção inválida!");
        break;

       
       }

      
      

      //VENCEDOR
      if(resultado1 == resultado2 && resultado1 == 0 && resultado2 == 0){
        printf("%s Venceu!", nome2);
      } else if (resultado1 != resultado2){
        printf("Empate!");
      } else {
        printf("%s Venceu!", nome);
      }
        
      
      




    


      return 0;

    }
