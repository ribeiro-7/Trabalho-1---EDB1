#include <iostream>

using namespace std;

int busca_binaria(int vet[], int tam_vet, int x) {
    int ini = 0;
    int fim = tam_vet - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;
        if (vet[meio] == x) {
            return meio;
        }
        else if (vet[meio] > x) {
            fim = meio - 1;
        }
        else {
            ini = meio + 1;
        }
    }
    return -1;
}

int main() {
  char op;
  cout << "Deseja criar um próprio vetor ou prefere realizar testes?" << endl;
  cout << "1: Criar vetor" << endl;
  cout << "2: Testes" << endl;
  cin >> op;
  if(op == '1'){
    int result;
    int tam_vet;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam_vet;
    int vet[tam_vet];
    cout << "Digite os valores que deseja colocar no vetor em ordem crescente: (Digite um número por vez)" << endl;
    for (int i = 0; i < tam_vet; i++){
      cin >> vet[i];
    }
    int x;
    cout << "Digite o valor que deseja buscar no vetor: ";
    cin >> x;
    result = busca_binaria(vet, tam_vet, x);
    if (result != -1) {
          cout << "O elemento " << x << " foi encontrado no índice " << result << endl;
      } else {
          cout << "-1" << endl;
      }
  }
  else if (op == '2') {
    cout << endl;
    cout << "Teste 1: Vetor de tamanho 7 em ordem crescente" << endl;
    int vet1[] = {1, 3, 5, 7, 9, 11, 13};
    cout << "Vetor: ";
    for (int j = 0; j < 7; j++) {
        cout << vet1[j] << ", ";
    }
    cout << endl;
    int x1 = 5;
    cout << "O valor de X é: " << x1 << endl;
    int result1 = busca_binaria(vet1, 7, x1);
    if (result1 != -1) {
        cout << "O elemento " << x1 << " foi encontrado no índice " << result1 << endl;
    } else {
        cout << "O elemento " << x1 << " não foi encontrado no vetor." << endl;
    }
    cout << endl;
    cout << "Teste 2: Vetor de tamanho 8 em ordem decrescente" << endl;
    int vet2[] = {15, 13, 11, 9, 7, 5, 3, 1};
    cout << "Vetor: ";
    for (int j = 0; j < 8; j++){
        cout << vet2[j] << ", ";
    }
    cout << endl;
    int x2 = 11;
    cout << "O valor de X é: " << x2 << endl;
    int result2 = busca_binaria(vet2, 8, x2);
    if (result2 != -1) {
        cout << "O elemento " << x2 << " foi encontrado no índice " << result2 << endl;
    } else {
        cout << "O elemento " << x2 << " não foi encontrado no vetor." << endl;
    }
    cout << endl;
    cout << "Teste 3: Vetor de tamanho 9 com elementos repetidos" << endl;
    int vet3[] = {2, 3, 3, 5, 7, 7, 7, 9, 11};
    cout << "Vetor: ";
    for (int j = 0; j < 9; j++){
      cout << vet3[j] << ", ";
    }
    cout << endl;
    int x3 = 3;
    cout << "O valor de X é: " << x3 << endl;
    int result3 = busca_binaria(vet3, 9, x3);
    if (result3 != -1) {
        cout << "O elemento " << x3 << " foi encontrado no índice " << result3 << endl;
    } else {
        cout << "O elemento " << x3 << " não foi encontrado no vetor." << endl;
    }
    cout << endl;
    cout << "Teste 4: Vetor de tamanho 5 com elementos não encontrado" << endl;
    int vet4[] = {2, 4, 6, 8, 10};
    cout << "Vetor: ";
    for (int j = 0; j < 5; j++){
      cout << vet4[j] << ", ";
    }
    cout << endl;
    int x4 = 7;
    cout << "O valor de X é: " << x4 << endl;
    int result4 = busca_binaria(vet4, 5, x4);
    if (result4 != -1) {
        cout << "O elemento " << x4 << " foi encontrado no índice " << result4 << endl;
    } else {
        cout << "O elemento " << x4 << " não foi encontrado no vetor." << endl;
    }
}
  return 0;
}
