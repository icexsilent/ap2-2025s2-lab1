#include <stdio.h>
#include <string.h> 

#define buffer 256
#define linhas 100

int main(){
    FILE *arquivo;
    char linha[buffer]; 

   
    char todas_linhas[linhas][buffer];
    int cont = 0; 

    arquivo = fopen("Teste.txt", "r");
    if (arquivo == NULL){
        printf("Deu erro ao abrir o arquivo Teste.txt\n");
        return 1; 
    }

    while(cont < linhas && fgets(linha, buffer, arquivo) != NULL){
        
        linha[strcspn(linha, "\n")] = '\0';

        strcpy(todas_linhas[cont], linha);
        cont++;
    }

    fclose(arquivo);

    for (int i = 0; i < cont; i++) {
        printf("%s\n", todas_linhas[i]);
    }

    if (cont == linhas) {
        printf("\nAviso: Limite de %d linhas atingido. O arquivo pode ser maior.\n", linhas);
    }
    
    return 0; 

} 