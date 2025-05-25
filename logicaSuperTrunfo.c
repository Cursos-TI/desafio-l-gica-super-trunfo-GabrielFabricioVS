#include <stdio.h>

int main(){
    // variáveis
    char cidades1[50], cidades2[50]; // nome das cidades
    char codigo1[4], codigo2[4];     // código das cartas
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float poder1, poder2;
    int escolha;

    // cadastro da primeira cidade
    printf("== Bem Vindo ao Jogo Super Trunfo ==\n");
    printf("Primeiro Cadastro\n");
    
    printf("Digite o Nome da Cidade: (Sem espaços, ex: São_Paulo ou SP)\n");
    scanf("%s", cidades1);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo1);

    printf("Digite a População da Cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%lf", &pib1);

    printf("Digite os Pontos Turísticos da Cidade:\n");
    scanf("%d", &pontosturisticos1);

    // calculo das propriedads
    double pibcapita1 = (pib1 * 1000000000) / populacao1; 
    float densidadepopulacional1 = (float) populacao1 / area1;
    float densidade_invertida1 = 1 / densidadepopulacional1;
    poder1 = populacao1 + area1 + pib1 + pibcapita1 + pontosturisticos1 + densidade_invertida1;

    // exibir dados da primeira cidade
    printf("\n======= Cadastro 1 =======\n");
    printf("Cidade: %s\n", cidades1);
    printf("Código da Carta: %s\n", codigo1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2lf reais\n", pibcapita1);
    printf("Super Poder: %.2f\n", poder1);

    // cadastro da segunda cidade
    printf("\nSegundo Cadastro\n");
    
    printf("Digite o Nome da Cidade: (Sem espaços, ex: São_Paulo ou SP)\n");
    scanf("%s", cidades2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite a População da Cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%lf", &pib2);

    printf("Digite os Pontos Turísticos da Cidade:\n");
    scanf("%d", &pontosturisticos2);

    // calculo das propriedades da segunda cidade
    double pibcapita2 = (pib2 * 1000000000) / populacao2; 
    float densidadepopulacional2 = (float) populacao2 / area2;
    float densidade_invertida2 = 1 / densidadepopulacional2;
    poder2 = populacao2 + area2 + pib2 + pibcapita2 + pontosturisticos2 + densidade_invertida2;

    // exibir dados da segunda cidade
    printf("\n======= Cadastro 2 =======\n");
    printf("Cidade: %s\n", cidades2);
    printf("Código da Carta: %s\n", codigo2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2lf reais\n", pibcapita2);
    printf("Super Poder: %.2f\n", poder2);
    //Printf das Escolhas

    printf("\nEscolha um Atributo da Carta para comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade Populacional\n");
    printf("6- PIB per Capita\n");
    printf("7- Super Poder\n");
    printf("\nDigite sua escolha:\n");
    scanf("%d", &escolha);

    // Comparaçao dos atributos
switch (escolha) {
    case 1: // População
printf("\nPopulação:\n%s, %lu Habitantes\n%s, %lu Habitantes\n", cidades1, populacao1, cidades2, populacao2);
if (populacao1 > populacao2){
printf("Carta 1 GANHOU, %s\n", cidades1);
}else if (populacao1 < populacao2){
printf("Carta 2 GANHOU, %s\n", cidades2);
}else{
printf("EMPATE!\n");   
}break;
        
case 2: // Área
printf("\nÁrea:\n%s, %.2f km²\n%s, %.2f km²\n", cidades1, area1, cidades2, area2);
if (area1 > area2)  { 
printf("Carta 1 GANHOU, %s\n", cidades1);
}else if (area1 < area2){
printf("Carta 2 GANHOU, %s\n", cidades2);
}else{
printf("EMPATE!\n");
}break;
        
case 3: // PIB
printf("\nPIB:\n%s, %.2lf bilhões de reais\n%s, %.2lf bilhões de reais\n", cidades1, pib1, cidades2, pib2);
if (pib1 > pib2){
printf("Carta 1 GANHOU, %s\n", cidades1);
}else if (pib1 < pib2){
printf("Carta 2 GANHOU, %s\n", cidades2);
}else{
printf("EMPATE!\n");
}break;
        
case 4: // Pontos Turísticos
printf("\nPontos Turísticos:\n%s, %d Pontos Turísticos\n%s, %d Pontos Turísticos\n", cidades1, pontosturisticos1, cidades2, pontosturisticos2);
if (pontosturisticos1 > pontosturisticos2){
printf("Carta 1 GANHOU, %s\n", cidades1);
}else if (pontosturisticos1 < pontosturisticos2){
printf("Carta 2 GANHOU, %s\n", cidades2);
}else{
printf("EMPATE!\n");
}break;

case 5: //Densidade Populacional
printf("\nDensidade Populacional:\n%s, %.2f hab/km²\n%s, %.2f hab/km²\n", cidades1, densidadepopulacional1, cidades2, densidadepopulacional2);
if (densidadepopulacional1 < densidadepopulacional2)
{
printf("Carta 1 GANHOU, %s\n", cidades1);
} else if (densidadepopulacional1 > densidadepopulacional2)
{
printf("Carta 2 GANHOU, %s\n", cidades2);
} else  {
printf("EMPATE!\n");
} break;

case 6://PIB per Capita
printf("\nPIB per Capita:\n%s, %.2lf PIB per Capita\n%s, %.2lf PIB per Capita\n", cidades1, pibcapita1, cidades2, pibcapita2);
if (pibcapita1>pibcapita2){
    printf("Carta 1 GANHOU, %s\n", cidades1);
} else if (pibcapita1<pibcapita2){
    printf("Carta 2 GANHOU, %s\n", cidades2);
}else{
printf("EMPATE!\n");
} break;

case 7://SuperPoder
printf("\nSuper Poder:\n%s, %.2f Super Poder\n%s, %.2f Super Poder\n", cidades1, poder1, cidades2, poder2);
if (poder1 > poder2){
printf("Carta 1 GANHOU, %s\n", cidades1);
} else if (poder1 < poder2)
{
printf("Carta 2 GANHOU, %s\n", cidades2);
} else{
    printf("EMPATE!\n");
} break;
default:
    printf("Opção inválida! Escolha um número de 1 a 7.\n");
    break;
    }

    
    return 0;
}