//Crear un programa que calcule la suma de los primeros N
//números naturales.

#include <stdio.h>
#define p printf
#define s scanf
void Saludo(void);
int IngresarDato(int*);
int main(void)
{
    Saludo();
    int num, suma,aux;
    IngresarDato(&num);
    aux=num;
    while(num>0)
    {
        suma+=num;
        num--;
    };
    p("La suma total hasta %d es: %d",aux,suma );
    return 0;
};

void Saludo(void)
{
    p("*******************\n");
    p("SUMA DE NUMEROS SUCESIVOS HASTA LLEGAR AL VALOR INDICADO\n");
    p("*******************\n");
};

int IngresarDato(int *num){
        p("Ingrese un numero: ");
    s("%d",num);
    return num;
}
