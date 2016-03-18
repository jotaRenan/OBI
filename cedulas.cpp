//https://www.urionlinejudge.com.br/judge/pt/problems/view/1018

#include <iostream>

using namespace std;

main(void) {

  int cedulas[7] = { 100, 50, 20, 10, 5, 2, 1 };
  int quant[7];
  int valor;

  cin >> valor;

  cout << valor << endl;

  for (int i =0; i < 7; i++) {
    quant[i] = valor/cedulas[i];
    valor %= cedulas[i];
    cout << quant[i] << " nota(s) de R$ " << cedulas[i] << ",00\n";
  }

}

