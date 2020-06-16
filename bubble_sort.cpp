#include <iostream>
#include <cstdlib>

using namespace std;

int * crearAleatorios(int n)
{
    int* numeros = new int [n];

    for(int i = 0; i < n; i++)
    {
        numeros[i] = rand() % n*10; 
    }
    return numeros;
}

void bubleSort(int *& numeros, int n)
{   
    int temp;
    while(n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(numeros[i] > numeros[i+1])
            {
                temp = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = temp;
            }
        }
        n--;
    }
    cout << "Ordenando" << endl;
}

void imprimir(int *numeros, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 10;
    int *numeros = crearAleatorios(n);
    imprimir(numeros, n);
    bubleSort(numeros, n);
    imprimir(numeros, n);


    return 0;
}