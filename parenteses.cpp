// --  URI 1068

#include <bits/stdc++.h>
#include <string>
using namespace std;

string check(string exp) {
    bool isopen = false;
    int npar = 0;
    for (int i=0; i < exp.length(); i++ ) {
        if (exp[i] == '(') {
            isopen = true;
            npar++;
        } else {
        if (exp[i] == ')') {
            isopen = false;
            npar++;
        }
        }
    }

    if (isopen == true) {
        return "incorrect";
    }
    else if (isopen == false && (npar%2 == 0)){
        return "correct";
    }
    else return "incorrect";


}

main() {
 string exp;

 while (cin >> exp) {
    cout << check(exp);
 }
}
