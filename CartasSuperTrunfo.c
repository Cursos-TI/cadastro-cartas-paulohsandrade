#include <stdio.h>

int main(){
	// Inicialização das variáveis:
	char estado_1, estado_2;
	char codigo_carta_1[3], codigo_carta_2[3];
	char cidade_1[20], cidade_2[20];
	int populacao_1, populacao_2;
	float area_1, area_2;
	float densidade_pop_1, densidade_pop_2;
	float pib_1, pib_2;
	float pib_pc_1, pib_pc_2;
	int turisticos_1, turisticos_2;

	// Leitura das informações da primeira carta:
	printf("Informações da primeira carta:\n");

	printf("digite a letra do estado:\n");
	scanf(" %c", &estado_1);

	printf("digite o código da carta:\n");
	scanf("%s", codigo_carta_1);

	printf("digite a cidade:\n");
	scanf("%s", cidade_1);

	printf("digite a população da cidade:\n");
	scanf("%d", &populacao_1);

	printf("digite a área da cidade:\n");
	scanf("%f", &area_1);

	printf("digite o PIB da cidade:\n");
	scanf("%f", &pib_1);

	printf("digite o número de pontos turísticos na cidade:\n");
	scanf("%d", &turisticos_1);

	densidade_pop_1 = (float) populacao_1 / area_1;
	pib_pc_1 = (float) (pib_1 * 1000000000) / populacao_1;

	// Leitura das informações da segunda carta:
	printf("Informações da segunda carta:\n");

	printf("digite a letra do estado:\n");
	scanf(" %c", &estado_2);

	printf("digite o código da carta:\n");
	scanf("%s", codigo_carta_2);

	printf("digite a cidade:\n");
	scanf("%s", cidade_2);

	printf("digite a população da cidade:\n");
	scanf("%d", &populacao_2);

	printf("digite a área da cidade:\n");
	scanf("%f", &area_2);

	printf("digite o PIB da cidade:\n");
	scanf("%f", &pib_2);

	printf("digite o número de pontos turísticos na cidade:\n");
	scanf("%d", &turisticos_2);

	densidade_pop_2 = (float) populacao_2 / area_2;
	pib_pc_2 = (float) (pib_2 * 1000000000) / populacao_2;

	// Impressão das informações da primeira carta:
	printf("Carta 1:\n");
	printf("Estado: %c\n",estado_1);
	printf("Código: %s\n",codigo_carta_1);
	printf("Nome da Cidade: %s\n",cidade_1);
	printf("População: %d\n",populacao_1);
	printf("Área: %.2f km²\n",area_1);
	printf("PIB: %.2f bilhões de reais\n",pib_1);
	printf("Número de pontos Turísticos: %d\n",turisticos_1);
	printf("Densidade Populacional: %.2f hab/km²\n",densidade_pop_1);
	printf("PIB per Capita: %.2f reais\n",pib_pc_1);


	
	// Impressão das informações da segunda carta:
	printf("Carta 2:\n");
	printf("Estado: %c\n",estado_2);
	printf("Código: %s\n",codigo_carta_2);
	printf("Nome da Cidade: %s\n",cidade_2);
	printf("População: %d\n",populacao_2);
	printf("Área: %.2f km²\n",area_2);
	printf("PIB: %.2f bilhões de reais\n",pib_2);
	printf("Número de pontos Turísticos: %d\n",turisticos_2);
	printf("Densidade Populacional: %.2f hab/km²\n",densidade_pop_2);
	printf("PIB per Capita: %.2f reais\n",pib_pc_2);

	return 0;
}