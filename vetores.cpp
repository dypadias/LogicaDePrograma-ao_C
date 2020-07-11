#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int vetorA[5];
	int i,j,troca;
	for (i=0;i<5;i++)
	{
		printf("Digite o elemento da  %d posição do vetor:\n", i);
		scanf("%d", &vetorA[i]);
		fflush(stdin);
	}


	for(i=0; i<4; i++)
	{	for(j=i+1;j<5;j++)
		{
			if (vetorA[i] > vetorA[j])
			{
			troca=vetorA[i];
			vetorA[i]=vetorA[j];
			vetorA[j]=troca;
			}
		}
	}
		for (i=0;i<5;i++)
		{
		
		printf("%d-",vetorA[i]);
	}
return 0;
}
