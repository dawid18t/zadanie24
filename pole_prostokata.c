#include <stdio.h>
#include <math.h>

float a, b;

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
return 0;
}
