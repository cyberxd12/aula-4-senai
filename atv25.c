#include <stdio.h>
#include <stdbool.h>


int caunt =0;

struct nme{
    char nome[50];
    int quantidade;
};


struct nme estoque[60];

void menu(){
    printf("Escolha uma opção:\n1- Cadastrar produto\n2- Buscar produto\n3- Sair do sistema\n\n");
}

void cadastro(){
    printf("\nnome do produto: ");
    scanf(" %s", &estoque[caunt].nome);
    printf("quantidade do produto: ");
    scanf(" %i", &estoque[caunt].quantidade);
    printf("o id desse produto é %i\n", caunt);
}

void busca(int id){
    printf("produto %i\nnome: %s\nquantidade: %i\n", caunt, estoque[caunt].nome,estoque[caunt].quantidade);
}

int main() {

    bool a = true;
    int opcao, id;
    
    do{
       menu(); 
       scanf("%i", &opcao);

       switch (opcao){
        case 1:
            caunt++;
            cadastro(caunt);
        break;

        case 2:
            printf("qual id do produto deseja encontra: ");
            scanf("%i", &id);
            busca(id);
        break;

        case 3:
            printf("Adeus verme!");
            a == false;
        break;
       
        default:
            printf("opção invalida!!!\n\n\n\n");
        break;
       }

    }while(a = true);
    return 0;
}