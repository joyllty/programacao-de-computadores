#include <stdio.h>

int main(){
	int vetorDesor[8] = {3, 5, 8, 9, 13, 15, 18, 20};
	int indMaior = 0, i = 0, j = 0;
	int temp = 0;
	
	for(i = 0; i < 8; i++){
		indMaior = i;
		for(j = 0; j < 8; j++){
			if(vetorDesor[indMaior] < vetorDesor[j]){
				indMaior = j; 
			}
		}
		temp = vetorDesor[i];
		vetorDesor[i] = vetorDesor[indMaior];
		vetorDesor[indMaior] = temp;
	}
	
	printf("O vetor ordenado e: ");
	for(i = 0; i < 8; i++){
		printf(vetorDesor[i]);	
	}
	
	
	
	return 0;
}
