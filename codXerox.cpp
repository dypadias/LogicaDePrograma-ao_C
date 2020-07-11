#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	
	printf("1-Para iniciar\n");
	printf("2-Para finalizar\n");
	scanf("%d",&j);
	fflush(stdin);
	while (j<=1){
		system("cls");
		printf("\nQuantas copias quer fazer:\n");
		scanf("%d", &i);
		if (i >= 100)
		{
			printf("\nValor da copia R$ 0,20");
			printf("\nValor total:R$ %.2f", i * 0.20);
		}else
		{
			if (i < 100)
			{
				printf("\nValor da copia R$ 0,25");
				printf("\nValor total:R$ %.2f\n", i * 0.25);
			
			}
		}
	printf("Deseja proseguir: 1-SIM 2-NÃO\n");
	scanf("%d",&j);
		}
		
}
