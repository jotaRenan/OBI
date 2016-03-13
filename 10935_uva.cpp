#include "stdafx.h"
#include <iostream>
#include <queue>

using namespace std;

void main() {

	int n;

	while (cin >> n) {

		if (!n) break;

		queue<int> deck, lixo;

		for (int i = 1; i <= n; i++) 
			deck.push(i);

		while (deck.size() > 1 ) {
			lixo.push(deck.front());
			deck.pop();
			deck.push(deck.front());
			deck.pop();
		}

		cout << "Discarded cards: ";
		while (!lixo.empty()) {
			if(lixo.size() > 1)
				cout << lixo.front() << ", ";
			else 
				cout << lixo.front() << endl;
			lixo.pop();
		}

		cout << "Remaining card: " << deck.front() << endl;
	}

}