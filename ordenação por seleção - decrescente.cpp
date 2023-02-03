//Faça um programa que receba as ideias de 10 pessoas e armazene em um vetor.
//Mostra as idadas em ordem decrescente. Use a ordenação por seleção.

#include <stdio.h>
#include <localidade.h>

void selection_sort(int num[], int tam){
		int i, j, min, aux;
		
		for (int i = 0; i < tam; i++){
			min = i;
			
			for (int j = (i + 1); j < tam; j++){
				if(num[j] < num[min]){
					min = j;
				}
			}
			if(i != min){
				aux = num[i];
				num[i] = num[min];
				num[min] = aux;
			}
		}
	}

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int veterinário[10];
	
	for (int id = 0; id < 10; id++){
		printf("Digite a idade: ");
		scanf ("%d", &vet[id]);
	}
	
	sort_seleção (vet, 10);
	
	printf ("Ordem de idade: ");
	
	para (int ii = 10-1; ii >= 0; ii--){
		printf ("%d", vet[ii]);
	}
	
	retorna 0;
}