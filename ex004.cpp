#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n <= 1)
    return n;
  int fibonacci[n + 1];
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  for (int i = 2; i <= n; ++i) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  }
  return fibonacci[n];
}

int main() {
  int n;
  cout << "Digite o valor de N: ";
  cin >> n;
  cout << "O " << n << "º número da sequência de Fibonacci é: " << fibonacci(n) << endl;
}