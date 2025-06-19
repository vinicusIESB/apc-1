#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PESSOAS 100
#define TAM_NOME 50
#define TAM_CPF 15
#define TAM_TELEFONE 15
#define TAM_EMAIL 50

typedef struct {
    char nome[TAM_NOME];
    char cpf[TAM_CPF];
    int idade;
    char telefone[TAM_TELEFONE];
    char email[TAM_EMAIL];
} Pessoa;

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int totalPessoas = 0;
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Novo Cadastro\n");
        printf("2. Buscar Cadastro por CPF\n");
        printf("3. Editar Cadastro\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite um numero.\n");
            while (getchar() != '\n');
            continue;
        }

        if (opcao == 1) {  // Novo cadastro
            if (totalPessoas >= MAX_PESSOAS) {
                printf("Limite de cadastros atingido.\n");
                continue;
            }

            printf("\n=== Novo Cadastro ===\n");

            printf("Nome: ");
            while (getchar() != '\n');
            fgets(pessoas[totalPessoas].nome, TAM_NOME, stdin);
            pessoas[totalPessoas].nome[strcspn(pessoas[totalPessoas].nome, "\n")] = '\0';

            int cpfValido;
            do {
                cpfValido = 1;
                printf("CPF (11 digitos): ");
                fgets(pessoas[totalPessoas].cpf, TAM_CPF, stdin);
                pessoas[totalPessoas].cpf[strcspn(pessoas[totalPessoas].cpf, "\n")] = '\0';

                if (strlen(pessoas[totalPessoas].cpf) != 11) {
                    printf("CPF deve ter 11 digitos!\n");
                    cpfValido = 0;
                }

                for (int i = 0; pessoas[totalPessoas].cpf[i] != '\0'; i++) {
                    if (!isdigit(pessoas[totalPessoas].cpf[i])) {
                        printf("CPF deve conter apenas numeros!\n");
                        cpfValido = 0;
                        break;
                    }
                }

                for (int i = 0; i < totalPessoas; i++) {
                    if (strcmp(pessoas[i].cpf, pessoas[totalPessoas].cpf) == 0) {
                        printf("CPF ja cadastrado!\n");
                        cpfValido = 0;
                        break;
                    }
                }
            } while (!cpfValido);

            printf("Idade: ");
            while (scanf("%d", &pessoas[totalPessoas].idade) != 1 || pessoas[totalPessoas].idade < 0 || pessoas[totalPessoas].idade > 120) {
                printf("Idade invalida! Digite um numero entre 0 e 120: ");
                while (getchar() != '\n');
            }

            printf("Telefone: ");
            while (getchar() != '\n');
            fgets(pessoas[totalPessoas].telefone, TAM_TELEFONE, stdin);
            pessoas[totalPessoas].telefone[strcspn(pessoas[totalPessoas].telefone, "\n")] = '\0';

            int emailValido;
            do {
                emailValido = 1;
                printf("Email: ");
                fgets(pessoas[totalPessoas].email, TAM_EMAIL, stdin);
                pessoas[totalPessoas].email[strcspn(pessoas[totalPessoas].email, "\n")] = '\0';
                if (strchr(pessoas[totalPessoas].email, '@') == NULL || strchr(pessoas[totalPessoas].email, '.') == NULL) {
                    printf("Email invalido! Deve conter '@' e '.'\n");
                    emailValido = 0;
                }
            } while (!emailValido);

            totalPessoas++;
            printf("Cadastro realizado com sucesso!\n");

        } else if (opcao == 2) {  // Buscar por CPF
            if (totalPessoas == 0) {
                printf("Nenhum cadastro ainda.\n");
                continue;
            }

            char cpfBusca[TAM_CPF];
            printf("Digite o CPF a ser buscado: ");
            while (getchar() != '\n');
            fgets(cpfBusca, TAM_CPF, stdin);
            cpfBusca[strcspn(cpfBusca, "\n")] = '\0';

            int encontrado = 0;
            for (int i = 0; i < totalPessoas; i++) {
                if (strcmp(pessoas[i].cpf, cpfBusca) == 0) {
                    printf("\nCadastro encontrado:\n");
                    printf("Nome: %s\n", pessoas[i].nome);
                    printf("CPF: %s\n", pessoas[i].cpf);
                    printf("Idade: %d\n", pessoas[i].idade);
                    printf("Telefone: %s\n", pessoas[i].telefone);
                    printf("Email: %s\n", pessoas[i].email);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("CPF nao encontrado.\n");
            }

        } else if (opcao == 3) {  // Editar cadastro
            if (totalPessoas == 0) {
                printf("Nenhum cadastro ainda.\n");
                continue;
            }

            char cpfEditar[TAM_CPF];
            printf("Digite o CPF do cadastro para editar: ");
            while (getchar() != '\n');
            fgets(cpfEditar, TAM_CPF, stdin);
            cpfEditar[strcspn(cpfEditar, "\n")] = '\0';

            int indice = -1;
            for (int i = 0; i < totalPessoas; i++) {
                if (strcmp(pessoas[i].cpf, cpfEditar) == 0) {
                    indice = i;
                    break;
                }
            }

            if (indice == -1) {
                printf("CPF nao encontrado.\n");
                continue;
            }

            printf("\nEditando cadastro de %s:\n", pessoas[indice].nome);
            printf("Novo nome: ");
            fgets(pessoas[indice].nome, TAM_NOME, stdin);
            pessoas[indice].nome[strcspn(pessoas[indice].nome, "\n")] = '\0';

            printf("Nova idade: ");
            while (scanf("%d", &pessoas[indice].idade) != 1 || pessoas[indice].idade < 0 || pessoas[indice].idade > 120) {
                printf("Idade invalida! Digite um numero entre 0 e 120: ");
                while (getchar() != '\n');
            }

            printf("Novo telefone: ");
            while (getchar() != '\n');
            fgets(pessoas[indice].telefone, TAM_TELEFONE, stdin);
            pessoas[indice].telefone[strcspn(pessoas[indice].telefone, "\n")] = '\0';

            int emailValido;
            do {
                emailValido = 1;
                printf("Novo email: ");
                fgets(pessoas[indice].email, TAM_EMAIL, stdin);
                pessoas[indice].email[strcspn(pessoas[indice].email, "\n")] = '\0';
                if (strchr(pessoas[indice].email, '@') == NULL || strchr(pessoas[indice].email, '.') == NULL) {
                    printf("Email invalido! Deve conter '@' e '.'\n");
                    emailValido = 0;
                }
            } while (!emailValido);

            printf("Cadastro atualizado com sucesso!\n");
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Encerrando o sistema...\n");
    return 0;
}