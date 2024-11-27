void bubble_sort (int vetor[], int n) {
	int i, j, k, aux;
    for (i = n - 1; i > 0; i--){
    	printf("\nPasso i = %d:\n", i);
    	for (j = 0; j < i; j++){
    		printf("Comparando %d e %d\n", vetor[j], vetor[j + 1]);
    		if(vetor[j] > vetor[j+1]){
    			aux = vetor[j];
    			vetor[j] = vetor[j+1];
    			vetor[j+1] = aux;
			}
		}
	}
	printf("Troca feita: ");
                for (k = 0; k < n; k++) {
                    printf("%d ", vetor[k]);
                }
                printf("\n");

}

void selection_sort (int vetor[], int n) {
	int i, j, aux, menor;
	
    for (i = 0; i < n; i++){
    	menor = i;
    	for (j = i + 1; j < n; j++){
    		if(vetor[j] < vetor[menor]){
    			menor = j;
			}
		}
		aux = vetor[menor];
		vetor[menor] = vetor[i];
		vetor[i] = aux;
	}
	printf("\nSelection Sort ordenado:\n");
	for (i = 0; i < n; i++) {
	printf("\nPosicao %d = %d\n", i, vetor[i]);
	}
}

//insertion
#include <stdio.h>
#define n 5
int main() {
  int arr[] = {5, 3, 8, 4, 2};
  for (int i = 1; i < n; i++) {
    int key = arr[i]; // O elemento a ser inserido
    int j = i - 1;
  // Move os elementos maiores que 'key' para a direita
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
  // Insere o elemento 'key' na posição correta
    arr[j + 1] = key;
}
  // Imprime o array ordenado
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  return 0;
}

//
