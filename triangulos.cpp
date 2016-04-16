#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

char checaTipo( double a, double b, double c ) {

    if ( a < (b+c) ) {

        a = pow(a,2);
        b = pow(b,2);
        c = pow(c,2);

        if ( a == (b+c)) {
            return 'r';
        } else if ( a < (b+c) ) {
            return 'a';
        } else {
            return 'o';
        }
    }
    else {
        return 'n';
    }
}

main() {
    double lados[3];

    for (int i=0; i<3; i++) {
        cin >> lados[i];
    }

    sort(lados, lados+3);
    cout << checaTipo(lados[2], lados[1], lados[0]);

}
