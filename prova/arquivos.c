#include <stdio.h>
#include <stdlib.h>

// fopen, fclose
// fprintf: escrever dados no arquivo (*arquivo, "dados")
// fputs: escrever uma string no arquivo (*string, *arquivo) -> é o contrário
// fputc: escrever um caractere no arquivo (caracter, *arquivo)
// fscanf: leitura formatada dados do arquivo/pode ler dados separados/ (*arquivo, "%99[^\n]", linha(armazena a linha))
// fgets: ler uma sequencia de caracteres(pode ser linha) ate a quebra de linha, nao separa os dados igual scanf/ (linha, sizeof(linha), *arquivo)
// fgetc: ler um caractere do arquivo, se usado em loop ele le carac por carac/ (*arquivo)
// feof: verifica se o final do arquivo foi atingido depois de uma operação de leitura
// fseek: fseek(arquivo, 5, SEEK_SET)
// rewind(arquivo)
// arquivos binários: fwrite, fread, rewind, 

int main(){
	//arquivos são tratados como uma sequência de bytes
	int numero, contador;
	char nome[10], letra = 'B';
	char linha[120];
	const char *string = "A vida não é um morango.\n";
	
	FILE *arquivo = fopen("teste.txt", "w");
	
	if(arquivo == NULL){
		return 1;
	}
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Digite seu numero da sorte: ");
	scanf("%d", &numero);
	
	fprintf(arquivo, "Nome: %s\n", nome);
	fprintf(arquivo, "oi\n");
	fprintf(arquivo, "Numero: %d\n", numero);
	
	if (fputs(string, arquivo) != EOF){
		printf("\nString escrita no arquivo com sucesso!");
	} else{
		printf("\nErro ao escrever a string no arquivo");
	}
	
	
	if (fputc(letra, arquivo) != EOF){
		printf("\nLetra escrita com sucesso no arquivo!");
	} else{
		printf("\nErro ao escrever a letra no arquivo");
	}
	
	fclose(arquivo);
	
	arquivo = fopen("teste.txt", "r");
	if(arquivo == NULL){
		printf("\nErro ao reabrir o arquivo para leitura");
		return 1;
	}
	
	while ((letra = fgetc(arquivo)) != EOF){
		printf("\nLetra lida: %c", letra);
		if(feof(arquivo)){
			printf("\nFim do arquivo alcancado.");
			break;
		}
	}

	
	if (fclose(arquivo) == 0){
		printf("\nArquivo fechado com sucesso!");
	} else {
		printf("\nErro ao fechar o arquivo");
		return 1;
	}
	
	FILE *arquivo2 = fopen("teste2.txt", "r");
	
	if(arquivo2 == NULL){
		return 1;
	}
	
	//fscanf(arquivo2, "%119[^\n]", linha); 
	fgets(linha, sizeof(linha), arquivo); 
	
	if(fclose(arquivo2) == 0){
		printf("\n\nLinha lida: %s\n", linha);
	}
	
	
	
	
	fclose(arquivo2);
	
	return 0;
}
