#include <stdio.h>

#define MAX_JOGADORES 20

typedef struct {
    int id;
    char nome[50];
    int pontos;
} Jogador;

// Protótipos
void cadastrarJogador(Jogador jogadores[], int *quantidade);
void listarJogadores(Jogador jogadores[], int quantidade);
int buscarPorId(Jogador jogadores[], int quantidade, int id);
void ordenarPorPontuacao(Jogador jogadores[], int quantidade);
void exibirCampeao(Jogador jogadores[], int quantidade);

int main() {

    Jogador jogadores[MAX_JOGADORES];
    int quantidade = 0;
    int opcao, id, indice;

    do {

        printf("\n==============================\n");
        printf(" SISTEMA RANKING JOGADORES\n");
        printf("==============================\n");
        printf("1 - Cadastrar jogador\n");
        printf("2 - Listar jogadores\n");
        printf("3 - Buscar jogador por ID\n");
        printf("4 - Ordenar ranking\n");
        printf("5 - Exibir campeao\n");
        printf("0 - Sair\n");

        printf("\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrarJogador(jogadores, &quantidade);
                break;

            case 2:
                listarJogadores(jogadores, quantidade);
                break;

            case 3:

                if (quantidade == 0) {
                    printf("\nNenhum jogador cadastrado.\n");
                    break;
                }

                printf("Digite o ID: ");
                scanf("%d", &id);

                indice = buscarPorId(jogadores, quantidade, id);

                if (indice != -1) {

                    printf("\n=== JOGADOR ENCONTRADO ===\n");
                    printf("ID: %d\n", jogadores[indice].id);
                    printf("Nome: %s\n", jogadores[indice].nome);
                    printf("Pontos: %d\n",
                           jogadores[indice].pontos);

                } else {
                    printf("Jogador nao encontrado.\n");
                }

                break;

            case 4:

                ordenarPorPontuacao(jogadores, quantidade);

                printf("\nRanking ordenado!\n");

                break;

            case 5:

                exibirCampeao(jogadores, quantidade);

                break;

            case 0:

                printf("\nEncerrando sistema...\n");

                break;

            default:

                printf("\nOpcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}

// CADASTRAR
void cadastrarJogador(Jogador jogadores[], int *quantidade) {

    if (*quantidade >= MAX_JOGADORES) {

        printf("\nLimite de jogadores atingido.\n");

        return;
    }

    int id;

    printf("\nID: ");
    scanf("%d", &id);

    if (buscarPorId(jogadores, *quantidade, id) != -1) {

        printf("Esse ID ja existe.\n");

        return;
    }

    jogadores[*quantidade].id = id;

    printf("Nome: ");
    scanf(" %[^\n]", jogadores[*quantidade].nome);

    printf("Pontos: ");
    scanf("%d", &jogadores[*quantidade].pontos);

    (*quantidade)++;

    printf("\nJogador cadastrado com sucesso!\n");
}

// LISTAR
void listarJogadores(Jogador jogadores[], int quantidade) {

    if (quantidade == 0) {

        printf("\nNenhum jogador cadastrado.\n");

        return;
    }

    printf("\n===============================\n");
    printf(" ID   NOME                 PTS\n");
    printf("===============================\n");

    for (int i = 0; i < quantidade; i++) {

        printf("%-4d %-20s %d\n",
               jogadores[i].id,
               jogadores[i].nome,
               jogadores[i].pontos);
    }
}

// BUSCAR
int buscarPorId(Jogador jogadores[], int quantidade, int id) {

    for (int i = 0; i < quantidade; i++) {

        if (jogadores[i].id == id) {
            return i;
        }
    }

    return -1;
}

// ORDENAR
void ordenarPorPontuacao(Jogador jogadores[], int quantidade) {

    Jogador aux;

    for (int i = 0; i < quantidade - 1; i++) {

        for (int j = 0; j < quantidade - i - 1; j++) {

            if (jogadores[j].pontos < jogadores[j + 1].pontos) {

                aux = jogadores[j];
                jogadores[j] = jogadores[j + 1];
                jogadores[j + 1] = aux;
            }
        }
    }
}

// CAMPEAO
void exibirCampeao(Jogador jogadores[], int quantidade) {

    if (quantidade == 0) {

        printf("\nNenhum jogador cadastrado.\n");

        return;
    }

    int campeao = 0;

    for (int i = 1; i < quantidade; i++) {

        if (jogadores[i].pontos >
            jogadores[campeao].pontos) {

            campeao = i;
        }
    }

    printf("\n🏆 CAMPEAO 🏆\n");
    printf("ID: %d\n", jogadores[campeao].id);
    printf("Nome: %s\n", jogadores[campeao].nome);
    printf("Pontos: %d\n",
           jogadores[campeao].pontos);
}