#include <iostream>

using namespace std;

main() {

  int valores[10000], N;

  int streak = 1, cstreak = 1;

  cin >> N;

  cin >> valores[0];


  for (int i=1; i<N; i++) {
    cin >> valores[i];
    if (valores[i] == valores[i-1]) {
      cstreak++;
      if (cstreak > streak)
        streak = cstreak;
    }
    else {
      cstreak=1;
    }
  }

  cout << streak << endl;

}
