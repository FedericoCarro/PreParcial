//Hay 3 pescadores, ganador es el que mas pesca, se dara premio a pieza mas grande
//Programa que ingrese cantidades y long de piezas por pescador
//Se va a ejecutar en el transcurso del dia, pescador 1 al 3, el 0 es para finalizar.
//Se debe Imprimir: Quien pescó mas, el pescador de la pieza mas grande, cant total de peces extraidos, promedio de long de peces extraidos.
#include <stdio.h>
#define p printf
#define s scanf
void QuienPesco(int*);
void Longitud(float*);
float MaxLongi(float,float );
int main(void)
{
    int pescador, cont1=0,cont2=0,cont3=0,flag1=1,flag2=1,flag3=1,TotalPeces;

    float longi, SumaTotalLong=0,PromedioTotalLong,maxlong1,maxlong2,maxlong3;
    QuienPesco(&pescador);
    while(pescador)
    {
        switch(pescador)
        {
        // cont1,cont2 y cont3 son las cant de peces pescados por pescador
        //maxlong1,maxlong2 y maxlong3 los maximos long de cada uno.
        case 1:
            cont1++;
            Longitud(&longi);
            if(flag1)
            {
                maxlong1=longi;
                flag1=0;
            }
            else
                maxlong1=MaxLongi(maxlong1,longi);
            break;
        case 2:
            cont2++;
            Longitud(&longi);
            if(flag2)
            {
                maxlong2=longi;
                flag2=0;
            }
            else
                maxlong2=MaxLongi(maxlong2,longi);
            break;
        case 3:
            cont3++;
            Longitud(&longi);
            if(flag3)
            {
                maxlong3=longi;
                flag3=0;
            }
            else
                maxlong3=MaxLongi(maxlong3,longi);
            break;
        case 0:
            p("Salio del sistema.");
            break;
        default:
            p("Pescador invalido\n");
        };

        SumaTotalLong+=longi;

        QuienPesco(&pescador);

    };
    TotalPeces= (cont1+cont2+cont3);
    PromedioTotalLong=(SumaTotalLong)/TotalPeces;

    //Comparativa para ver que pescador tuvo la max cantidad de pesca
    if (cont1>cont2 &&cont1>cont3)
        p("El pescador 1 fue el que pesco mas con la cant de: %d pescados\n",cont1);
    else if(cont2>cont1 && cont2>cont3 )
        p("El pescador 2 fue el que pesco mas, con la cant de: %d pescados\n",cont2);
    else if(cont3>cont1 && cont3>cont2)
        p("El pescador 3 fue el que pesco mas, con la cant de: %d pescados\n",cont3);
    else if(cont1==cont2)
        p("Hubo empate entre pescador 1 y pescador 2 con: %d pescados\n",cont1);
    else if(cont2==cont3)
        p("Hubo empate entre pescador 2 y pescador 3 con: %d pescados\n",cont2);
    else
        p("Hubo empate entre pescador 1 y pescador 3 con: %d pescados\n",cont1);

//Comparativa para ver que pescador tuvo el pez mas grande
    if (maxlong1>maxlong2 &&maxlong1>maxlong3)
        p("El pescador 1 fue el de la pieza mas grande con la long de: %.2f \n",maxlong1);
    else if(maxlong2>maxlong1 && maxlong2>maxlong3 )
        p("El pescador 2 fue el de la pieza mas grande con la long de: %.2f \n",maxlong2);
    else if (maxlong3>maxlong1 &&maxlong3>maxlong2)
        p("El pescador 3 fue el de la pieza mas grande con la long de: %.2f \n",maxlong3);
    else if(maxlong1==maxlong2)
        p("Hubo empate entre pescador 1 y pescador 2 con la long de: %.2f \n",maxlong1);
    else if(cont2==cont3)
        p("Hubo empate entre pescador 2 y pescador 3 con la long de: %.2f \n",maxlong2);
    else
        p("Hubo empate entre pescador 1 y pescador 3 con la long de: %.2f \n",maxlong1);
//Total de peces y Promedio de longitudes.
    p("El total de los peces extradidos es: %d\n",TotalPeces);
    p("El promedio de la longitud total de peces es: %.2f\n",PromedioTotalLong);
    return 0;
};

void QuienPesco(int* pescador)
{
    p("\nIngrese quien pesco:\n1- Pescador 1\n2-Pescador 2\n3-Pescador 3\n0-PARA SALIR\n\n");
    s("%d",pescador);
}
void Longitud(float* longi)
{
    p("ingrese la longitud de la pieza: \n");
    s("%f",longi);
}
float MaxLongi(float maxlong,float actual)
{
    if (maxlong>actual)
        return maxlong;
    else
        return actual;
}
