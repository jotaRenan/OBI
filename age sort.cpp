
//uri 1329


#include <bits/stdc++.h>
using namespace std;


main() {

    int n;

    do {

        cin >> n;
        if (n!=0) {
        vector<int> ages;
            for (int i=0; i<n; i++) {
                int age;
                cin >> age;
                ages.push_back(age);
            }
            sort( ages.begin(), ages.end() );
            for (int i=0; i < n; i++) {
                cout << ages[i] << " ";
            }
            cout << endl;
        }

    } while (n!=0);

}
