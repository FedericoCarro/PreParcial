// Consigna: devolver el maximo y el mínimo de un conjunto de numeros ingresados por el usuario,
// si el usuario ingresa un 0 el programa se finaliza, caso contrario se continua ejecutando

#include <stdio.h>
#define p printf
#define s scanf

void CargarDato(int*);
int Maximo(int,int);
int Minimo(int,int);
int main(void)
{
    int num, min, max, flag;
    flag=1;
    CargarDato(&num);
    while(num)
    {
        if(flag)
        {
            max=num;
            min=num;
            flag=0;
        }
        else
        {
            max=Maximo(max,num);
            min=Minimo(min,num);
            CargarDato(&num);
        }
    }
    if (flag)
        p("Salio del sistema");
    else
        p("El maximo es: %d\nEl minimo es: %d",max,min );

    return 0;
};

void CargarDato(int*num)
{
    p("Ingrese un numero: \n");
    s("%d",num);
};
int Maximo(int max, int num)
{
    if (num>max)
        return num;
    else
        return max;
}
int Minimo(int min, int num)
{
    if (num>min)
        return min;
    else
        return num;
}
