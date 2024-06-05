// Consigna: devolver el maximo y el mínimo de un conjunto de numeros ingresados por el usuario,
// si el usuario ingresa un 0 el programa se finaliza, caso contrario se continua ejecutando

#include <stdio.h>
#define p printf
#define s scanf

// Prototipos
void cargarDato(int *);
int maximo(int, int);
int minimo(int, int);

int main(void)
{
    int num, max, min, flag = 1;

    cargarDato(&num);
    while (num)
    {
        if (flag)
        {
            max = num;
            min = num;
            flag = 0;
        }
        else
        {
            max = maximo(max, num);
            min = minimo(min, num);
        }
        cargarDato(&num);
    };

    if (flag)
    {
        p("Ha salido del sistema");
    }
    else
    {
        p("El valor max es: %d y el min es: %d", max, min);
    }

    return 0;
};

void cargarDato(int *num)
{
    p("\nIngrese un valor: ");
    s("%d", num);
};

int maximo(int max, int num)
{
    if (max > num)
        return max;
    else
        return num;
};

int minimo(int min, int num)
{
    if (min < num)
        return min;
    else
        return num;
};