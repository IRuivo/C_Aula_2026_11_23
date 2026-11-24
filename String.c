#include <stdio.h>
#include <string.h>



int main() {


char nome[50];
char senha[50];
const char senhaCorreta[] = "c1234"; // Senha correta

printf("Digite seu nome: ");
fgets(nome, 50, stdin); // Lê o nome do usuário
nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha do final

printf("Digite sua senha: ");
fgets(senha, 50, stdin); // Lê a senha do usuário
senha[strcspn(senha, "\n")] = '\0'; // Remove o caractere de nova linha do final

// strlen() tecnicamente devolve size_t, mas convertemos para int aqui
// porque o %d e mais simples e o tamanho de um nome nunca e um numero gigante
printf("\nOla, %s! Seu nome tem %d caracteres.\n", nome, (int)strlen(nome));

if (strcmp(senha, senhaCorreta) == 0) {
    printf("Senha correta! Acesso concedido.\n");
} else {
    printf("Senha incorreta! Acesso negado.\n");


}

return 0;
}