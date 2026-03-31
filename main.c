#include <stdio.h>
#include <stdlib.h>

#define QUANT 20

struct produto{
    int cod[QUANT];
    int quantidade[QUANT];
    float preco_uni[QUANT];
};

void cadastrar_produto(int *cod, float *preco_uni,  int *quantidade);
void calcValor(int *cod, float *preco_uni,  int *quantidade);


int main() {

    int menu, i;
    struct produto cad;

    do
    {
        printf("1 - Cadastrar produto:  ");
        printf("\n2 - Atualizar quantidade em estoque: ");
        printf("\n3 - Calcular o valor total em estoque: ");
        printf("\n4 - Listar todos os produtos cadastrador: ");
        printf("\n5 - Sair\n");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                cadastrar_produto(cad.cod,cad.preco_uni, cad.quantidade);
                break;
            case 2:

                break;
            case 3:
                calcValor(cad.cod,cad.preco_uni, cad.quantidade);
                break;
            case 4:
                break;
            case 5:
                break;
        }

    }while(menu != 5);

}

void cadastrar_produto(int *cod, float *preco_uni,  int *quantidade) {
    int sair = 0;
    int i = 0;

    while (sair != 2 || i == 20) {
        printf("Digite o codigo do produto!\n");
        scanf("%d", &cod[i]);

        printf("Digite a quantidade que deseja cadastrar:\n");
        scanf("%d", &quantidade[i]);

        printf("Digite o preco do produto!\n");
        scanf("%f", &preco_uni[i]);

        printf("1 - Cadastrar mais produtos\n");
        printf("2 - Voltar para a tela de menu\n");
        scanf("%d", &sair);

        i++;
    }

}

/*void calcValor(int *cod, float *preco_uni,  int *quantidade) {

    int i = 0, perg;
    float temporario;

    printf("Digite o codigo do produto:\n");
    scanf("%d", &perg);


    for (i = 0; i < QUANT; i++) {
        if (cod[i] == perg) {

        }


    }
}*/