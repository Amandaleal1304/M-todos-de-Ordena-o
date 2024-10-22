#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

// Função para ordenar vetor em ordem crescente usando Bubble Sort
int BSM(int Lista[], int tamanho)
{
    int i, j, aux, trocas = 0;
    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (Lista[j] > Lista[j + 1])
            {
                aux = Lista[j];
                Lista[j] = Lista[j + 1];
                Lista[j + 1] = aux;
                trocas++;
            }
        }
    }
    return trocas;
}

// Função para ordenar vetor em ordem decrescente usando Bubble Sort
int BSMD(int Lista[], int tamanho)
{
    int i, j, aux, trocas = 0;
    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (Lista[j] < Lista[j + 1])
            {
                aux = Lista[j];
                Lista[j] = Lista[j + 1];
                Lista[j + 1] = aux;
                trocas++;
            }
        }
    }
    return trocas;
}

int main()
{
    int trocas1 = 0;
    int trocas2 = 0;
    int vetor[10] = {8, 11, 20, 5, 17, 30, 14, 15, 28, 19}; // vetor original
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);         // calcula o tamanho do vetor
    srand(time(NULL));//tempo

    cout << "\nVetor original: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " "; // percorre e imprimi  vetor original
    }
    cout << endl<<endl;

     double inicio = clock();//inicio do metodo de ordenacao

    trocas1 = BSM(vetor, tamanho); // guarda o numero de trocas feito no vetor crescente e chama a funcao
    cout << "Vetor ordenado por ordem crescente: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " "; // percorre e imprimi o vetor em ordem crescente
    }

    cout << "\nNumero de trocas realizadas: " << trocas1 << endl<<endl;

    trocas2 = BSMD(vetor, tamanho); // guarda o numero de trocas realizadas no vetor ordenado decrescente e chama a funcao
    cout << "Vetor ordenado por ordem decrescente: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " "; // percorre e imprimi  vetor em ordem decrescente
    }

     double fim = clock();

    cout << "\nNumero de trocas realizadas: " << trocas2 << endl;

      cout << "\n\nTempo de execucao: " << (fim - inicio) / CLOCKS_PER_SEC << " segundos" << endl;

    

    return 0;
}
