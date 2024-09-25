#include <iostream>

int main() {
    int eta;
    char nome;
    printf("calcola se una persona e' maggiorenne o no :\n nome(solo iniziale) : ");
    scanf("%c", &nome);
    printf("l'eta' e' : ");
    scanf("%d", &eta);
    if (eta >= 18)
        printf("%c e' maggiorenne\n", nome);
}
