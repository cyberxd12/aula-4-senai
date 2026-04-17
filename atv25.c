#include <stdio.h>
#include <stdbool.h>
#define tamanho 5

int code =0;

struct nme{
    char nome[50];
    int quantidade;
};

struct nme estoque[tamanho];

int opcao;

void cadastro(){
    if(code < tamanho){
        code++;
        printf("\nnome do produto: ");
        scanf(" %s", &estoque[code].nome);
        printf("quantidade do produto: ");
        scanf(" %i", &estoque[code].quantidade);
        printf("o id desse produto é %i\n\n", code);
    }else{
        printf("armazenamento cheio!\n");
    }
}

void busca(int id){
    printf("produto %i\nnome: %s\nquantidade: %i\n\n", code, estoque[code].nome,estoque[code].quantidade);
}

void menu(int opc){
    int id;
    opcao = opc;
    switch (opc){
        case 1:
            cadastro(code);
        break;

        case 2:
            printf("qual id do produto deseja encontra: ");
            scanf("%i", &id);
            busca(id);
        break;

        case 3:
            printf("Adeus verme!");
            
        break;

        default:
            printf("opção invalida!!!\n\n\n\n");
        break;
    }
}

int main() {
    do{
        printf("Escolha uma opção:\n1- Cadastrar produto\n2- Buscar produto\n3- Sair do sistema\n\n");
        scanf("%i", &opcao);
        menu(opcao);
    }while(opcao != 3);
    return 0;
}
