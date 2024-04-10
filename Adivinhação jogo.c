#include <stdio.h>

int main() {


  
  // Imprime cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("\n");

    // Pergunta o nome do usuário
    //char nome[100];
    //printf("Qual é o seu nome? ");
    //scanf("%s", nome);
    //printf("\n");
  
    int numerosecreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("\n");

    // Acertou! FIM!
    int acertou = (chute == numerosecreto);

    if (acertou) {
        printf("Parabéns, %s! Você acertou!\n", nome);
        printf("******************************************\n");
        return 0;
    } else {
        int maior = chute > numerosecreto;
        if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } else {
            printf("Seu chute foi menor que o número secreto\n");
        }
    }

    printf("******************************************\n");
    printf("\n");

    // Jogar novamente depois de ERRAR
    int novamente;
    printf("%s você quer jogar novamente? Digite 1 para sim e 2 para não: ", nome);
    scanf("%d", &novamente);
    printf("\n");
    if (novamente == 1) {
        printf("\n");
        return main();
    } else {
        printf("Obrigado por jogar, %s! Até mais!\n", nome);
    }
}