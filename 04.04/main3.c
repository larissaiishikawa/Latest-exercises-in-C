# include <stdio.h>

int main() {
    double media, freq;
    int apr;

    printf("Digite sua media: ");
    scanf("%f", &media);

    printf("Digite sua frequencia: ");
    scanf("%f", &freq);

    apr = (media >= 6.0) && (freq >= 0.75);

    if(apr == 1) {
        printf("Parabens! Voce foi aprovado! :D");
    }
    else {
        printf("Voce foi reprovado, boa sorte no proximo semestre.");
    }
}