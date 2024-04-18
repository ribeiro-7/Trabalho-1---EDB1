#include <iostream>

using namespace std;

bool verifica_ordenado(int vet[], int tam_vet) {
    for (int i = 0; i < tam_vet - 1; i++) {
        if (vet[i] > vet[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
  char op;
  cout << "Deseja criar um vetor ou realizar testes ? " << endl;
  cout << "1. Criar vetor" << endl;
  cout << "2. Testes" << endl;
  cin >> op;
  if (op == '1'){
    int result;
    int tam_vet;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam_vet;
    int vet[tam_vet];
    cout << "Digite os valores que deseja colocar no vetor: (Digite um valor por vez)" << endl;
    for(int i = 0; i < tam_vet; i++){
      cin >> vet[i];
    }
  result = verifica_ordenado(vet, tam_vet);
    if(result == true){
      cout << "O vetor está ordenado." << endl;
    }
    else{
      cout << "O vetor está desordenado." << endl;
    }
  }
  else if (op == '2'){
    cout << endl;
    cout << "Teste 1: Vetor aleatório de tamanho 10" << endl;
    int vet1[] = {5, 2, 9, 1, 4, 6, 3, 8, 7, 10};
    cout << "Vetor: ";
    for(int j = 0; j < 10; j++){
      cout << vet1[j] << ", ";
    }
    cout << endl;
    int result1 = verifica_ordenado(vet1, 10);
    if(result1 == true){
      cout << "O vetor está ordenado." << endl;
    }
    else{
      cout << "O vetor está desordenado." << endl;
    }
    cout << endl;
    cout << "Teste 2: Vetor aleatório de tamanho 7" << endl;
    int vet2[] = {4, 7, 2, 9, 1, 5, 3};
    cout << "Vetor: ";
    for(int j = 0; j < 7; j++){
      cout << vet2[j] << ", ";
    }
    cout << endl;
    int result2 = verifica_ordenado(vet2, 7);
    if(result2 == true){
      cout << "O vetor está ordenado." << endl;
    }
    else{
      cout << "O vetor está desordenado." << endl;
    }
    cout << endl;
    cout << "Teste 3: Vetor aleatório de tamanho 5" << endl;
    int vet3[] = {1, 2, 3, 4, 5};
    cout << "Vetor: ";
    for(int j = 0; j < 5; j++){
      cout << vet3[j] << ", ";
    }
    cout << endl;
    int result3 = verifica_ordenado(vet3, 5);
    if(result3 == true){
      cout << "O vetor está ordenado." << endl;
    }
    else{
      cout << "O vetor está desordenado." << endl;
    }
  }
  return 0;
}
