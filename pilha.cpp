#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define max 10

int pilha[max];
int topo=-1;

void empilhar();
void desempilhar();
void exibir();
int menu();

void empilhar(){
  int p;
  if (topo < (max-1)) {
    cout << "Insira numero: ";
    cin >> p;
    pilha[++topo]=p;
  }
  else {
    cout << "A pilha está cheia.";
    getch();
  }
}

void desempilhar() {
  if (topo!=-1) {
    cout << "Foi desempilhado o elemento " << pilha[topo--];
    getch();
  }
  else {
    cout << "A pilha ja esta vazia.";
    getch();
  }
}

void exibir() {
  if (topo!=-1) {
    for(int j=0; j <= topo; j++) {
      cout << "Elemento pilha[" << j << "]=" << pilha[j] << endl;
    }
    getch();
  }
  else {
    cout << "Pilha vazia";
    getch();
  }
}

int menu() {
  int op;
  system("cls");
  cout << "1 - Empilhar." << endl
       << "2 - Desempilhar." << endl
       << "3 - Exibir pilha." << endl
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
      case 1: empilhar(); break;
      case 2: desempilhar(); break;
      case 3: exibir(); break;
    }
  } while (op!=4);
}
