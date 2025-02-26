#include <stdio.h>

int main()
{
   
char Estado_A [20],Estado_B[20];
char cidade_A01[20],cidade_B01[20];
unsigned long int populacao_A01,populacao_B01;
float area_A01,area_B01;
float pib_A01,pib_B01;
int pontos_A01,pontos_B01;
float densidade_A01,densidade_B01;
float pibp_A01,pibp_B01;
float poder_A01,poder_B01;
int populacao_resultado, area_resultado,pib_resultado,pontos_resultado,densidade_resultado,pibp_resultado,poder_resultado;
int resultado_final;

   //Saudações e instruções ao usuário para cadastramento das cartas
    printf("***Olá! Bem vindo ao Jogo de cartas super trunfo. Cadastre as cartas como a seguir***\n");
    printf("Digite o estado, em seguida, a cidade, e finalmente as propriedades da cidade\n");
    
    //Cadastramento das variaveis do estado A
    printf("**Digite o nome do primeiro estado a ser cadastrado: ");
    scanf("%[^\n]",Estado_A);
    
    printf("Agora o nome da primeira cidade do estado de %s a ser cadastrada: ",Estado_A);//primeira cidade
    scanf(" %[^\n]",cidade_A01);
    
    printf("Digite o número da população de %s: ",cidade_A01);
    scanf(" %lu",&populacao_A01);
    
    printf("Agora o tamanho da área de %s em Km quadrados: ",cidade_A01);
    scanf(" %f",&area_A01);
    
    printf("O produto interno bruto (PIB) da cidade de %s em bilhões: ",cidade_A01);
    scanf(" %f",&pib_A01);
    
    printf("O número de pontos turísticos de %s: ",cidade_A01);
    scanf(" %i",&pontos_A01);
    
    //Cadastramento das variaveis do segundo estado B
    printf("**Digite o nome do segundo estado a ser cadastrado: ");
    scanf(" %[^\n]",Estado_B);
    
    printf("Agora o nome da primeira cidade do estado de %s a ser cadastrada: ",Estado_B);//primeira cidade
    scanf(" %[^\n]",cidade_B01);
    
    printf("Digite o número da população de %s: ",cidade_B01);
    scanf(" %lu",&populacao_B01);
    
    printf("Agora o tamanho da área de %s em Km quadrados: ",cidade_B01);
    scanf(" %f",&area_B01);
    
    printf("O produto interno bruto (PIB) da cidade de %s em bilhões: ",cidade_B01);
    scanf(" %f",&pib_B01); 
    
    printf("O número de pontos turísticos de %s: ",cidade_B01);
    scanf(" %i",&pontos_B01);

    //Cálculo da densidade populacional e da renda per capita

    densidade_A01=populacao_A01/area_A01;
    pibp_A01=(pib_A01/populacao_A01)*1000000000;// multiplica por 1 bilhão para mostrar o resultado em reais

    densidade_B01=populacao_B01/area_B01;
    pibp_B01=(pib_B01/populacao_B01)*1000000000;

    
    
    //Exibindo o status das cartas
    
    printf("\n***Cartas do Jogo***\n");
    
    
    printf("\n*Carta 1\n");
    printf("Código da carta: A01\n");
    printf("Estado da carta A: %s\n",Estado_A);
    printf("Nome da cidade: %s\n",cidade_A01);
    printf("População: %lu\n",populacao_A01);
    printf("Área: %.2f Km²\n",area_A01);
    printf("PIB: %.2f bilhões de reais\n",pib_A01);
    printf("Número de pontos turísticos: %d\n",pontos_A01);
    printf("Densidade populacional: %.2f hab/Km²\n",densidade_A01);
    printf("PIB per capita: %.2f reais\n",pibp_A01); 
    
    
    printf("\n*Carta 2\n");
    printf("Código da carta: B01\n");
    printf("Estado da carta B: %s\n",Estado_B);
    printf("Nome da cidade: %s\n",cidade_B01);
    printf("População: %lu\n",populacao_B01);
    printf("Área: %.2f Km²\n",area_B01);
    printf("PIB: %.2f bilhões de reais\n",pib_B01);
    printf("Número de pontos turísticos: %d\n",pontos_B01);
    printf("Densidade populacional: %.2f hab/Km²\n",densidade_B01);
    printf("PIB per capita: %.2f reais\n",pibp_B01);
    
   
    //Calcular carta vencedora pela Densidade populacional
    
    printf("\n***Comparação das cartas por densidade populacional***\n");
        printf("Carta A01: %s - Estado: %s %.2f hab/Km²\n",cidade_A01,Estado_A,densidade_A01);
        printf("Carta B01: %s - Estado: %s %.2f hab/Km²\n",cidade_B01,Estado_B,densidade_B01);
    
    if(densidade_A01<densidade_B01){
        printf("Carta A01 %s venceu!\n",cidade_A01);
    }else{
        printf("Carta B01 %s venceu!\n",cidade_B01);
    }
    

    return 0;
}