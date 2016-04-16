#include <bits/stdc++.h>
using namespace std;

main() {

    int n;

    do {
        cin >> n;

        if(n!=0) {
            int turn, maria=0, joao=0;

            for (int i=0; i<n; i++) {

                cin >> turn;

                turn == 0 ? maria++ : joao++;
            }
            printf("Mary won %d times and John won %d times\n", maria, joao);

        }
    } while (n!=0);
}
