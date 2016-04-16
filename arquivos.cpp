#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

main() {

    int n, b;
    cin >> n >> b;

    vector<int> arquivos;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        arquivos.push_back(x);
    }

    sort(arquivos.begin(), arquivos.end());



}
