#include <iostream>

using namespace std;

int busca_sequencial(int vet[], int tam_vet, int x, int indice = 0) {
    if (indice >= tam_vet) {
        return -1;
    }
    if (vet[indice] == x) {
        return indice;
    }
    return busca_sequencial(vet, tam_vet, x, indice + 1);
}

int main() {
  char op;
  cout << "Deseja criar um próprio vetor ou prefere que a gente realize testes ?" << endl;
  cout << "1: Criar vetor" << endl;
  cout << "2: Testes" << endl;
  cin >> op;
  if (op == '1'){
    int tam_vet;
    cout << "Qual o tamanho do vetor? ";
    cin >> tam_vet;
    int vet[tam_vet];
    int x;
    int result;
    cout << "Digite os elementos que deseja no vetor: (Digite um número por vez)" << endl;
    for (int i = 0; i < tam_vet; i++){
        cin >> vet[i];
    }
    cout << "Qual o valor de X ? ";
    cin >> x;
    result = busca_sequencial(vet, tam_vet, x);
    if (result != -1) {
        cout << "O elemento " << x << " foi encontrado no índice " << result << endl;
      } 
    else {
        cout << "-1" << endl;
    }
  }
  else if(op == '2'){
    cout << endl;
    cout << "Teste 1: O teste apresenta um vetor de tamanho 7, com valores aleatórios entre 0 e 10." << endl;
    int vet1[] = {5, 2, 9, 1, 4, 6, 3};
    cout << "Vetor: ";
    for (int j = 0; j < 7; j++) {
        cout << vet1[j] << ", ";
    }
    cout << endl;
    int x1 = 3;
    cout << "O valor de X é: " << x1 << endl;
    int result1 = busca_sequencial(vet1, 7, x1);
    if (result1 != -1) {
        cout << "O elemento " << x1 << " foi encontrado no índice " << result1 << endl;
    } 
    else {
        cout << "O elemento " << x1 << " não foi encontrado no vetor." << endl;
    }
    cout << endl;
    cout << "Teste 2: Vetor de tamanho 10 com elementos repetidos." << endl;
    int vet2[] = {1, 2, 3, 4, 5, 3, 7, 8, 9, 3};
    cout << "Vetor: ";
    for (int j = 0; j < 10; j++) {  
      cout << vet2[j] << ", ";
    }
    cout << endl;
    int x2 = 3;
    cout << "O valor de X é: " << x2 << endl;
    int result2 = busca_sequencial(vet2, 10, x2);
    if (result2 != -1) {
        cout << "O elemento " << x2 << " foi encontrado no índice " << result2 << endl;
    } 
    else {
        cout << "O elemento " << x2 << " não foi encontrado no vetor." << endl;
    }
    cout << endl;
    cout << "Teste 3: Busca por elemento não presente no vetor de tamanho 5." << endl;
    int vet3[] = {1, 2, 3, 4, 5};
    cout << "Vetor: ";
    for (int j = 0; j < 5; j++) {
        cout << vet3[j] << ", ";
    }
    cout << endl;
    int x3 = 10;
    cout << "O valor de X é: " << x3 << endl;
    int result3 = busca_sequencial(vet3, 5, x3);
    if (result3 != -1) {
        cout << "O elemento " << x3 << " foi encontrado no índice " << result3 << endl;
    } 
    else {
        cout << "O elemento " << x3 << " não foi encontrado no vetor." << endl;
    }
  }
  return 0;
}