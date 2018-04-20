#include <iostream>

using namespace std;

int main()
{
    //Recebe o tamanho do vetor, inicializa o vetor e testa se tem numeros repetidos dentro dele.
    int i, n, j;
    cout << "Digite um numero" << endl;
    cin >> n;
    int vetor[n];
    cout << "Digite " << n << " numeros " << endl;
    for (i=0; i<n; i++){
        cin >> vetor[i];
    }
    for (i=0; i<n; i++)
        for (j=0; j<i; j++){
            if (vetor[i] == vetor[j]){
        cout << "posicao " << j+1 << " igual a posicao " << i+1 <<endl;}
        }
    cout << "nao tem elementos iguais" << endl;

    return 0;
}
