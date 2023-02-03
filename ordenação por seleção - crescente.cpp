//Faça um programa que receba as ideias de 10 pessoas e armazene em um vetor.
//Mostre as idadas em ordem crescente. Use a ordenação por seleção.

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
	
	for (int i = 0; i < 10; i++){
		printf("Digite a idade: ");
		scanf ("%d", &vet[i]);
	}
	
	sort_seleção (vet, 10);
	
	printf ("Ordem de idade: ");
	
	for (int ii = 0; ii < 10; ii++){
		printf ("%d", vet[ii]);
	}
	
	retorna 0;
}