#include <iostream>
#include <conio.h>
#define SIZE 10

using namespace std;

void exibir(int* vet) {
  for (int i=0; i< SIZE; i++) {
    cout << (*vet)+i << ' ';
  }
}


main (void) {

  int v1[SIZE], v2[SIZE];
  int vR[2*SIZE];

  for (int i=0; i < SIZE; i++) {
    v1[i] = i+1;
    v2[i] = i+1;
  }

  cout << "Esse programa intercala os elementos de dois arranjos.\n";
  getch();

  cout << "\nVetor 1: { ";
  exibir(v1);
  cout << "}.";
  getch();

  cout << "\nVetor 2: { ";
  exibir(v2);
  cout << "}.";
  getch();

  for (int i=0, j=1; i< 2*SIZE; i+=2, j++ ) {
    vR[i] = v1[SIZE - j];
    vR[i+1] = v2[SIZE - j];
  }

  cout << "\n\nVetor resultante: \nvR= {";
  for(int i =0; i< 2*SIZE; i++) {
    cout << vR[i] << ", ";
  }
  cout << "}.";

}
