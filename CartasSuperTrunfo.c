#include <stdio.h>

int main(){

/* Definindo variaveis */
   
    char estado1[10],carta1[10],cidade1[10],estado2[10],carta2[10],cidade2[10];
    int habitantes1,turisticos1,habitantes2,turisticos2;
    float area1,pib1,area2,pib2;
    float densidade1,perc1,densidade2,perc2;
    int Rpopulacao,  Rturisticos, Rdensidade, Rpercapita, Rarea, Rpib;
    double poderA, poderB, RsuperPoder;
    //RsuperPoder

// ========== ENTRADAS CARTA 1 ==========
   
   printf ("Digite a primeira carta: ");
   scanf("%s",&carta1); 
   printf ("Digite o Estado: ");
   scanf("%s",&estado1); 
   printf ("Digite o cidade: ");
   scanf("%s",&cidade1); 
   printf ("Digite a quantidade de habitantes: ");
   scanf("%d",&habitantes1); 
   printf ("Digite a quantidade de pontos turistivos: ");
   scanf("%d",&turisticos1); 
   printf ("Digite a quantidade de metros quadrados: ");
   scanf("%f",&area1); 
   printf ("Digite o PIB: ");
   scanf("%f",&pib1); 

// ========== ENTRADAS CARTA 2 ==========
   
   printf ("Digite a segunda carta: ");
   scanf("%s",&carta2); 
   printf ("Digite o Estado: ");
   scanf("%s",&estado2); 
   printf ("Digite o cidade: ");
   scanf("%s",&cidade2); 
   printf ("Digite a quantidade de habitantes: ");
   scanf("%d",&habitantes2); 
   printf ("Digite a quantidade de pontos turistivos: ");
   scanf("%d",&turisticos2); 
   printf ("Digite a quantidade de metros quadrados: ");
   scanf("%f",&area2); 
   printf ("Digite o PIB: ");
   scanf("%f",&pib2);    

// ========== CALCULO CARTA 1 ==============
   densidade1 =  (float) (habitantes1 / area1);
   perc1 = (float) (pib1 / habitantes1);
 
// ========== SAÍDAS CARTA 1 ==============
   printf("=================== CARTA 1 =================== \n");
   printf("Nome da Carta: %s\n",carta1);
   printf("Nome do Estado: %s\n",estado1);
   printf("Nome da Cidade: %s\n",cidade1);
   printf("Metros quadrados: %.2f\n",area1);
   printf("Quantidade de habitantes: %d\n",habitantes1);
   printf("Quantidade de Pontos turisticos: %d\n",turisticos1);
   printf("PIB:%.2f\n",pib1);
   printf("Densidade Populacional: %.2f\n",densidade1);
   printf("PIB per Capita: %.2f\n",perc1);

// =============== SUPER PODER A ========================= //
   poderA = area1 + habitantes1 + turisticos1 + pib1 + perc1 + (1.0/densidade1);
   printf("Super Poder Carta A: %.2f\n",poderA); 

// ========== CALCULO CARTA 2 ==============
   densidade2 =  (float) (habitantes2 / area2);
   perc2 = (float) (pib2 / habitantes2);  

// ========== SAÍDAS CARTA 2 ==============
   printf("=================== CARTA 2 =================== \n");
   printf("Nome da Carta: %s\n",carta2);
   printf("Nome do Estado: %s\n",estado2);
   printf("Nome da Cidade: %s\n",cidade2);
   printf("Metros quadrados: %.2f\n",area2);
   printf("Quantidade de habitantes: %d\n",habitantes2);
   printf("Quantidade de Pontos turisticos: %d\n",turisticos2);
   printf("PIB:%.2f\n",pib2); 
   printf("Densidade Populacional: %.2f\n",densidade2);
   printf("PIB per Capita: %.2f\n",perc2);

// =============== SUPER PODER B ========================= //
   poderB = area2 + habitantes2 + turisticos2 + pib2 + perc2 + (1.0/densidade2);
   printf("Super Poder Carta B: %.2f\n",poderB);

// =============== DEFININDO VENCEDOR ================== //
   Rpopulacao = habitantes1 > habitantes2;
   Rturisticos = turisticos1 > turisticos2;
   Rdensidade = densidade1 > densidade2;
   Rpercapita = perc1 > perc2;
   Rarea = area1 > area2;
   Rpib = pib1 > pib2;
   RsuperPoder = poderA > poderB;

  printf("=================== DEFINIÇÃO DE VENCEDOR =================== \n");
  printf("Metros quadrados: Vencedor é %d\n", Rarea);
  printf("Quantidade de habitantes: Vencedor é %d\n", Rpopulacao);
  printf("Quantidade de Pontos turisticos:Vencedor é  %d\n", Rturisticos);
  printf("PIB: Vencedor é %d\n", Rpib);
  printf("Densidade Populacional: Vencedor é  %d\n", Rdensidade);
  printf("PIB per Capita: Vencedor é  %d\n", Rpercapita);
  printf("Super poder: Vencedor é %d\n", RsuperPoder);

printf("=================== PARA APROVAÇÃO =================== \n");
  if (area1 > area2) {
    printf("Metros quadrados:  Vencedor é Carta 1\n");
} else {
    printf("Metros quadrados:  Vencedor é Carta 2\n");
}

  if (habitantes1 > habitantes2) {
    printf("Quantidade de habitantes: Vencedor é Carta 1\n");
} else {
    printf("Quantidade de habitantes: Vencedor é Carta 2\n");
}

  if (turisticos1 > turisticos2) {
    printf("Quantidade de Pontos turisticos: Vencedor é Carta 1\n");
} else {
    printf("Quantidade de Pontos turisticos: Vencedor é Carta 2\n");
}

  if (pib1 > pib2) {
    printf("PIB: Vencedor é Carta 1\n");
} else {
    printf("PIB: Vencedor é Carta 2\n");
}

  if (densidade1 > densidade2) {
    printf("Densidade Populacional: Vencedor é Carta 1\n");
} else {
    printf("Densidade Populacional: Vencedor é Carta 2\n");
}

  if (perc1 > perc2) {
    printf("PIB per Capita: Vencedor é Carta 1\n");
} else {
    printf("PIB per Capita: Vencedor é Carta 2\n");
}


  if (poderA > poderB) {
    printf("Super poder: Vencedor é Carta 1\n");
} else {
    printf("Super poder: Vencedor é Carta 2\n");
}}
