#include <stdio.h>
#include <math.h>

float a, b, r;

float obliczPoleKola(float r) {
    return 3.14 * (r * r);
}

void menuPolaKola() {
    printf("\n Podaj promien kola\n");
    printf("r: ");
    scanf("%f", &r);
    printf("Pole kola wynosi %f", obliczPoleKola(r));
}
float obliczPoleProstokata(float a, float b){
    return (a*b);
}
void menuobliczPoleProstokata(){
    float a;
    float b;
    printf("Podaj wartosc a:\t");
    scanf("%f", &a);
    printf("Podaj wartosc b:\t");
    scanf("%f", &b);

    printf("\n wynik:%f",obliczPoleProstokata(a, b));
}
int main ()
{

 menuobliczPoleProstokata();
 menuPolaKola();
return 0;
}
