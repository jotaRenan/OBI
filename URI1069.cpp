#include <bits/stdc++.h>
using namespace std;

main() {

  int n;  //n entradas
  cin >> n;
  stack<char> diamonds;
  string cadeia;

  int resp; //resposta
  for (int i=0; i<n; i++) {
    resp = 0;

    cin >> cadeia;
    for (int j=0; j<cadeia.length(); j++) {
      if (cadeia.at(j) == '<') {
        diamonds.push(cadeia.at(j));
      }
      else if (cadeia.at(j) == '>') {
        if (!diamonds.empty()) {
          diamonds.pop();
          resp++;
        }
      }
    }
    cout << resp << endl;
    cadeia.clear();
    while(!diamonds.empty()) {
      diamonds.pop();
    }
  }

}
