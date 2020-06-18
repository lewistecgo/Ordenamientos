#include <iostream>
#include <cstdlib>

using namespace std;

int * generar_numeros(int tam)
{
    int * numeros = new int[tam];
    for(int i = 0; i < tam; i++)
    {
        numeros[i] = rand() % tam * 10;
    }
    return numeros;
}

void imprimir(int *numeros, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return;
}

void insertSort(int *&numeros, int tam)
{
    
    for(int i = 0; i <= tam; i ++)
    {
        
        for(int j = i; j >= 0; j--)
        {
            if(numeros[j] >= numeros[j+1])
            {
                int mano = numeros[j+1];
                numeros[j+1] = numeros[j];
                numeros[j] = mano;

            }

        }
        
    }
}

int main()
{
    int n = 10;
    int * numeros = generar_numeros(n);
    imprimir(numeros, n);
    insertSort(numeros, n);
    imprimir(numeros, n);
    return 0;
}