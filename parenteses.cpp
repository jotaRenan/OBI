#include <bits/stdc++.h>
#include <string>
using namespace std;

int check(string exp) {
    bool isopen = false;
    int npar = 0;
    for (int i=0; i < exp.length(); i++ ) {
        if (exp[i] == '(') {
            isopen = true;
            npar++;
        }
        else {
            if (exp[i] == ')') {
                isopen = false;
                npar++;
            }
        }
    }

    if (isopen == false && (npar%2 == 0)){
        return 1;
    }
    else return 0;


}

main() {
 string exp;

 while (cin >> exp) {
    cout << (check(exp) ? "correct\n" : "incorrect\n");
 }
}
