#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 5
struct cadastro
{
	char nome[80], email[30],telefone[15];
	int cod;
		
};
int main()
{
	setlocale(LC_ALL,"Portuguese");
	struct cadastro cliente[TAM];
	int i,j,op,retorno,busca,acha,k;
	op=4;
	j=0;
	system("pause");
	
	while (op !=0)
	{
		system("cls");
		printf("\n1-Para cadastro de novo cliente\n");
		printf("2-Para consultar clientes cadastrados\n");
		printf("3-Para busca avançada\n");
		printf("0 -Finalizar\n");
		printf("Digite a opção desejada:\n");
		scanf("%d", &op);
		fflush(stdin);
		if (op > 3)
		{
			system("cls");
			printf("\nOpção invalida(Digite 0,1,2,3)\n");
			system("pause");
		}
		 else
	   	{
			if (op == 1)
			{	
				retorno=0;
				if(j>=TAM)
				{
					system("cls");
					printf("\nAGENDA LOTADA\n");
					system("pause");
				}
				
				for(i=i;(i<TAM)&&(j<TAM)&&((retorno == 0)||(retorno !=2));i++)
				{
					system("cls");
					cliente[i].cod=i+100;
					printf("Código do cliente: %d\n",cliente[i].cod);
					printf("Digite o nome do cliente: \n");
					gets (cliente[i].nome);
					fflush(stdin);
					fflush(stdin);
					printf("E-mail: \n");	
					scanf("%30[^\n]s",cliente[i].email);
					fflush(stdin);
					printf("Telefone: \n");
					gets(cliente[i].telefone);
					fflush(stdin);
					j++;
					system("pause");
					system("cls");
					retorno=2;
					system("cls");
					printf("\nCadastrado realizado com sucesso\n\n");
					system("pause");
				}
				
		    }
		      else
		     {
				if (op==2)
				{
					system("cls");
					if(j<=0)
			 			{
			 				printf("\nAGENDA VAZIA\n");
			 				system("pause");
			 				system("cls");
			 			}
						 else
						 {
						 	for(i=0;(i<j);i++)
				  			{
				  				printf("\nCódigo do cliente: %d", cliente[i].cod);
								strupr(cliente[i].nome);
				  			    printf("\nNome: %s",cliente[i].nome);
				  				printf("\nE-mail: %s",cliente[i].email);
				  				printf("\nTelefone: %s\n", cliente[i].telefone);
				  				
				  			 }system("pause");
						 }  
				 }	
			 }	
		}
		if(op ==3)
		{
			k=0;
			acha=0;
			system("cls");
		if(j<=0)
			{
				printf("\nAGENDA VAZIA\n");
			 	system("pause");
			 	system("cls");
			}
			 else
			 {	
				printf("Digite o codigo que deseja procurar: ");
				scanf("%d", &busca);
				fflush(stdin);
				while((k<TAM)&&(acha==0))
					{
						if(busca == cliente[k].cod)
						{
							acha=1;
						}
						else
						{
							k++;
						}
					}
				if(acha==1)
				{
					system("cls");
					printf("\nCódigo do cliente: %d", cliente[k].cod);
					strupr(cliente[k].nome);
					strupr(cliente[k].nome);
					printf("\nNome: %s",cliente[k].nome);
					printf("\nE-mail: %s",cliente[k].email);
					printf("\nTelefone: %s\n", cliente[k].telefone);
					system("pause");
				}
				 else
				{	
					if(acha!= 1);
						{
							system("cls");
							printf("Cliente não cadastrado\n");
							system("pause");
						}
				}
			  }
		}
	}
return 0;		 	
}
