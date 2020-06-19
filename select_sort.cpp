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

void selectSort(int *&numeros, int tam)
{
    for(int i = 0; i <= tam; i ++)
    {
        int menor = i;
        for(int j = 0; j <= tam; j++)
        {
            if(numeros[menor] < numeros[j])
            {
                int temp = numeros[j];
                numeros[j] = numeros[menor];
                numeros[menor] = temp;
            }
        }
        
        
    }
}

int main()
{
    int n = 10;
    int * numeros = generar_numeros(n);
    imprimir(numeros, n);
    selectSort(numeros, n);
    imprimir(numeros, n);
    return 0;
}