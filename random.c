#include <stdio.h>
#include <time.h>
#define p printf
#define s scanf

int maximo(int, int);
int minimo(int, int);

int main(void){
    int numRandom;
    srand(time(NULL)); //inicia el contador random - SI O SI HAY QUE INICIALIZARLO

    for (int i = 0; i < 10; i++)
    {
        numRandom = rand()%(21); //imprimira numeros random desde el 0 al 20
        p("%d\n", numRandom);
    }
    

    return 0;
}