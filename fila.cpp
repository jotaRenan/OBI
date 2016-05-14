#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

#define max 3

int f[max];
int inicio=0, fim =0;

void adicionar();
void remover();
void exibir();
int menu();

void adicionar() {
    if (fim < max) {
        cout << "Digite numero: ";
        int n;
        cin >> n;
        f[fim++] = n;
    }
    else {
        cout << "Fila cheia";
    }
}

void remover() {
    if (inicio == fim) {
        cout << "Fila vazia";
    }
    else {
        cout << "Removeu " << f[inicio] << " da pos." << inicio << endl;
        inicio++;
    }
}

void exibir() {
    if ( inicio==fim) {
        cout << "Fila vazia";
    }
    else {
        for (int i=inicio; i<fim; i++) {
            printf("Fila[%d] = %d\n", i, f[i]);
        }
    }
}

int menu() {
  int op;
  system("cls");
  cout << "1 - Adicionar." << endl
       << "2 - Remover." << endl
       << "3 - Exibir fila." << endl
       << "4 - Sair." << endl << endl
       << "Escolha Opcao: ";
  cin >> op;
  return op;
}

main(void){
  int op;
  do {
    op=menu();
    system("cls");
    switch(op) {
      case 1: adicionar(); getch(); break;
      case 2: remover(); getch(); break;
      case 3: exibir(); getch(); break;
    }
  } while (op!=4);
}
