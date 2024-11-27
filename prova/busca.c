//busca sequencial
#include <stdio.h>
int buscaSequencial(int *lista, int tamanho, int chave) {
	int i;
	for (i = 0; i < tamanho; i++) {
		if (lista[i] == chave) {
		return i; // Retorna o índice se encontrar a 	chave
		}
	}
	return -1; // Retorna -1 se não encontrar a chave
}

int main() {
	int numeros[] = {20, 5, 15, 24, 67, 45};
	int buscado, resultado;
	
	//solicita o valor de busca
	printf("Digite o numero que deseja buscar: ");
	scanf("%d", &buscado);
	resultado = buscaSequencial(numeros, 6, buscado);
	
	if (resultado != -1) {
		printf("O elemento %d foi encontrado no indice %d.\n", buscado, resultado);
	} else {
		printf("O elemento %d nao foi encontrado na lista.\n", buscado);
	}
	
	return 0;
}	

//busca binaria
#include <stdio.h>
int buscaBinaria(int *lista, int inicio, int fim,int chave) {
	while (inicio <= fim) {
		int meio = inicio + (fim - inicio) / 2;
		
		if (lista[meio] == chave) {
			return meio; // Retorna a posição se encontrar a chave
		} else if (lista[meio] > chave) {
			fim = meio - 1; // Busca na metade inferior
		} else {		
			inicio = meio + 1; // Busca na metade superior
		}
	}
	return -1; // Retorna -1 se a chave não estiver na lista
}
int main() {
	int numeros[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int buscado, resultado;
	
	printf("Digite o número que deseja buscar: ");
	scanf("%d", &buscado);
	
	resultado = buscaBinaria(numeros, 0, 9, buscado);
	
	if (resultado != -1) {
		printf("O elemento %d foi encontrado no índice %d.\n", buscado, resultado);
	} else {
		printf("O elemento %d não foi encontrado na lista.\n", buscado);
	}
	return 0;
}
