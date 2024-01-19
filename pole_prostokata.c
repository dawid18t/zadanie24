#include <stdio.h>
#include <math.h>

float a, b, r;

float obliczPoleKola(float r) {
    return 3.14 * (r * r);
}

void select_PolaKola() {
    printf("\n Podaj promien kola\n");
    printf("r: ");
    scanf("%f", &r);
    printf("Pole kola wynosi %f", obliczPoleKola(r));
}
float obliczPoleProstokata(float a, float b){
    return (a*b);
}
void select_PolaProstokata(){
    float a;
    float b;
    printf("Podaj wartosc a:\t");
    scanf("%f", &a);
    printf("Podaj wartosc b:\t");
    scanf("%f", &b);

    printf("\n wynik:%f",obliczPoleProstokata(a, b));
}
void menu() {
    int wybor;
    printf("prostokat czy kolo \n1. Prostokat\n2. Kolo\n");
    scanf("%d", &wybor);
    switch(wybor) {
        case 1:
            select_PolaProstokata();
            break;
        case 2:
            select_PolaKola();
            break;
        default:
            printf("Wybierz poprawn¹ liczbê!\n");
            menu();
            break;
    }
}

int main() {
    menu();
    return 0;
}



